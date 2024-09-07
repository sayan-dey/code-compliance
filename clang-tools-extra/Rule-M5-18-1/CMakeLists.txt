set(LLVM_LINK_COMPONENTS support)

add_clang_executable(Rule-M5-18-1
  Rule-M5-18-1.cpp
  )
target_link_libraries(Rule-M5-18-1
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangFrontend
  clangSerialization
  clangTooling
  )