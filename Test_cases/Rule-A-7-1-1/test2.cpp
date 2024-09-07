//Constexpr or const specifiers shall be used for immutable data declaration.
int main()
{
  const int x1 = 5; // Compliant
  constexpr int x2 = 5; // Compliant
  x1++; // Non-compliant
  x2=6; // Non-compliant

  return 0;
}