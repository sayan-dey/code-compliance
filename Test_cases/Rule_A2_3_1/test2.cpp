// Only those characters specified in the C++ Language Standard basic source
// character set shall be used in the source code.

int main()
{
    int sum=0; // Compliant
    int Â£_value = 10; // Non-compliant
    sum += Â£_value; // Non-compliant
    // Variable sum stores Â£ pounds // Non-compliant

    return 0;
}