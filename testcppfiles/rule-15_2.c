#include <stdint.h>

void f(void) {
  int32_t j = 0;
L1:
  ++j;
  if (10 == j) {
    goto L2;
  }
  goto L1;
L2:
  ++j;
}