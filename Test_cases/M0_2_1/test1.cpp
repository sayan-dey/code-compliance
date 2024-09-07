//An object shall not be assigned to an overlapping object.

struct s
{
    int m1 [ 25 ];
    int x;
};
struct t
{
    int m2;
    struct s m3;
};
int main ( )
{
    union
    {
    struct s u1;
    struct t u2;
    } a;
    a.u2.m3 = a.u1; // Non-compliant
    a.u2.m2 = a.u1.x; //Non-compliant
}