#include <stdint.h>

typedef long globallong;

int unusedtype(void)
{
  typedef int16_t localint;
  typedef unsigned long long int ulli;
  localint a = 10;
  globallong itslong = 10000000000000000;
  return 0;
}

int main() { return 0; }