
// A project shall not contain unused variables.

int func(int a, int b)
{
  int prod=a*b;
  return prod;
}

int main() {
  int x = 2;
  int y = 2;
  int z=6; // Non-compliant - unused

  int a=20;
  int b=20;

  int sum =x+y; // Non-compliant - unused

  int prod=func(a,b);
  prod=prod+1;

}