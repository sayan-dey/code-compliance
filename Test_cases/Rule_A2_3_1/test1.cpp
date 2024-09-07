// Only those characters specified in the C++ Language Standard basic source
// character set shall be used in the source code.

int main()
{
    float a = 45; // Compliant
    float b = 69.25; //Compliant

    float sum = a+b; //Compliant

    float x = 25αβ; //Non-compliant
    

    return 0;
}