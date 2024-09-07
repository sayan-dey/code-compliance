 
 //The asm declaration shall not be used.

 int Fn1(int b) noexcept
 {
    int ret = 0;
    // ...
    asm("pushq %%rax \n"
    "movl %0, %%eax \n"
    "addl %1, %%eax \n"
    "movl %%eax, %0 \n"
    "popq %%rax"
    : "=r"(ret)
    : "r"(b)); // Non-compliant
    return ret;
 }
 int Fn2(int b) noexcept
 {
    int ret = 0;
    // ...
    ret += b; // Compliant - equivalent to asm(...) above
    return ret;
 }

 
 int Fn3()
 {
    asm("pushq       %rbp"
    "movq        %rsp, %rbp"
    "movl        16(%rbp), %eax"
    "addl        20(%rbp), %eax"
    "popq        %rbp"
    "ret"); //Non-compliant

    return 0;
 }

 int Fn4(int a, int b)
 {
    return a+b;
 }


