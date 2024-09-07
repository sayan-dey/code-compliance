
//Bitwise operators shall only be applied to operands of
//unsigned underlying type.

//All Non-Compliant Testcase

int main()
{
    int x=5;
    unsigned int y=6;

    unsigned int a =~x;
    x = x&2;
    x = x>>2;

    //Not throwing error for below cases
    unsigned int b = x & y;
    unsigned int c = x | y;
    unsigned int d = x ^ y;

    return 0;
}