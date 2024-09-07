//The constexpr specifier shall be used for values that can be determined at
//compile time.

int pow(int x)
{
    return x*x;
}

int main()
{

    int sq1 = pow(2); // Non-compliant, possible run-time evaluation
    constexpr int sq2 = pow(3); // Compliant, evaluated at compile time
    return 0;
}