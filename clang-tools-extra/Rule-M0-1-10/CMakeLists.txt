set(LLVM_LINK_COMPONENTS support)

add_clang_executable(Rule-M0-1-10
  Rule-M0-1-10.cpp
  )
target_link_libraries(Rule-M0-1-10
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangFrontend
  clangSerialization
  clangTooling
  )