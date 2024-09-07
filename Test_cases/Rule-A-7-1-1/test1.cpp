//Constexpr or const specifiers shall be used for immutable data declaration.
int main()
{
 const std::int x1 = 5; // Compliant
 constexpr std::int x2 = 5; // Compliant
 int x3 = 5; // Non-compliant - x3 is not modified but not declared as
             // constant (const or constexpr)
 return 0;
}