#include <stdbool.h>
#include <stddef.h>

bool func(int n, char *p) {
  if (n > 100) {
    return false;
  }
  if (p == NULL) {
    return false;
  }
  return true;
}

int main() { return 0; }

float dummy0(int p, int x) { return 100.0; }

float dummy1(int p, int x) {
  if (x > 100)
    return 0.0;
  return -1.0;
}