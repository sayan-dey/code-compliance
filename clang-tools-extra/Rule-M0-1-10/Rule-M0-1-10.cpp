// Rule M0–1–10: Every defined function shall be called at least once.


#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "llvm/Support/CommandLine.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include <vector>
#include <unordered_set>
#include <clang/AST/ASTContext.h>

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;
using namespace llvm;
using namespace std;

std::unordered_set<std::string> declaredFunctions; //for storing declared funcs with body {...}
std::unordered_set<std::string> calledFunctions; //for storing functions that are called

class FunctionPrinter : public MatchFinder::MatchCallback {
public:
    FunctionPrinter() {}

    virtual void run(const MatchFinder::MatchResult &Result) {
        if (const auto *funcDecl = Result.Nodes.getNodeAs<FunctionDecl>("func")) {

            if (funcDecl->hasBody()) 
            {
                // llvm::outs() << "Declared function with body, that is, {...}: " << funcDecl->getNameAsString() << "\n";
                declaredFunctions.insert(funcDecl->getNameAsString());
            }
        }
    }
};

class CalledFunctionPrinter : public MatchFinder::MatchCallback {
public:
    CalledFunctionPrinter() {}

    virtual void run(const MatchFinder::MatchResult &Result) {
        if (const auto *callExpr = Result.Nodes.getNodeAs<CallExpr>("call")) {
            if (const FunctionDecl *funcDecl = callExpr->getDirectCallee()) {
                // llvm::outs() << "Called function: " << funcDecl->getNameAsString() << "\n";
                calledFunctions.insert(funcDecl->getNameAsString());
            }
        }
    }
};

void checkUnusedFunctions() {

        for (auto declfunc:declaredFunctions)
        {
            if(calledFunctions.find(declfunc)==calledFunctions.end() && declfunc!="main") //as main is not called explicitly from code but executed
            {
                llvm::errs()<<"\nERROR: Function "<<declfunc<<" defined but not called\n";
            }
        }
}

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

    FunctionPrinter DeclaredFunctionPrinter; // For declared functions
    CalledFunctionPrinter CalledFunctionPrinter; // For called functions

    MatchFinder DeclaredFunctionFinder;
    DeclaredFunctionFinder.addMatcher(functionDecl().bind("func"), &DeclaredFunctionPrinter);

    MatchFinder CalledFunctionFinder;
    CalledFunctionFinder.addMatcher(callExpr(callee(functionDecl())).bind("call"), &CalledFunctionPrinter);

    Tool.run(newFrontendActionFactory(&DeclaredFunctionFinder).get());
    Tool.run(newFrontendActionFactory(&CalledFunctionFinder).get());

    checkUnusedFunctions();

    return 0;
}

