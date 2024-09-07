
//Bitwise operators shall only be applied to operands of
//unsigned underlying type.

//All Compliant Testcase
int main()
{
    unsigned int x=5;
    unsigned int y=6;

    unsigned int a =~x;
    x = x<<2;
    x = x>>2;

    unsigned int b = x & y;
    unsigned int c = x | y;
    unsigned int d = x ^ y;

    return 0;
}