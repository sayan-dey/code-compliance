//The constexpr specifier shall be used for values that can be determined at
//compile time.

int main()
{
   constexpr int i1 = 20; // Compliant, evaluated at compile-time
   const int i2 = 20; // Non-compliant, possible run-time evaluation
   int i3 = 10000000000000;  // Non-compliant, possible run-time evaluation (integer overflow)
   return 0;
}