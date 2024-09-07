//The comma operator shall not be used.

#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "llvm/Support/CommandLine.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include <vector>
#include "clang/AST/ASTContext.h"

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;
using namespace llvm;
using namespace std;

class CommaOperatorChecker : public MatchFinder::MatchCallback {
public:
    virtual void run(const MatchFinder::MatchResult &Result) {
        if (const auto *commaExpr = Result.Nodes.getNodeAs<BinaryOperator>("commaOp")) {
            // Emitting an error when a comma operator is found
            clang::DiagnosticsEngine &DE = Result.Context->getDiagnostics();
            unsigned diagID = DE.getCustomDiagID(DiagnosticsEngine::Error, "Rule-M5-18-1: The comma operator shall not be used.");
            DE.Report(commaExpr->getExprLoc(), diagID);
        }
    }
};

static llvm::cl::OptionCategory MyToolCategory("my-tool options"); // MyToolCategory: name of my tool

int main(int argc, const char **argv) {

    auto ExpectedParser = CommonOptionsParser::create(argc, argv, MyToolCategory);
    if (!ExpectedParser) {
        // Fail gracefully for unsupported options.
        llvm::errs() << ExpectedParser.takeError();
        return 1;
    }
    CommonOptionsParser &OptionsParser = ExpectedParser.get();
    ClangTool Tool(OptionsParser.getCompilations(),
                   OptionsParser.getSourcePathList());

    CommaOperatorChecker Checker; // Declaring the class CommaOperatorChecker
    MatchFinder Finder;
    Finder.addMatcher(binaryOperator(hasOperatorName(","), unless(isInTemplateInstantiation())).bind("commaOp"), &Checker);
    // The bind("commaOp") part allows us to capture the matched comma operators.

    return Tool.run(newFrontendActionFactory(&Finder).get());
}
