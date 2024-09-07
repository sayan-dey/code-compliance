
//A project shall not contain unused variables.


void sum ( int a, int b )
{
    int sum = a+b; // Non-compliant - unused
}
class C
{
    int left;
    int right;
};
C c; // Non-compliant - unused
void withunusedvar ( void )
{
int unusedvar; // Non-compliant – unused
struct s_tag
{
  int a = 3;
  int b = 2;
} s_var;
s_var.a = 0;
s_var.b = 0;
sum ( s_var.a, s_var.b );
}