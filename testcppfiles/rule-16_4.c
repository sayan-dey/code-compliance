#include <stdint.h>
int main() {
  int16_t x;
  switch (x) {
  case 0:
    ++x;
    break;
  case 1:
  case 2:
    break;
  }

  switch (x) {
  case 0:
    ++x;
    break;
  case 1:
  case 2:
    break;
  default:
    break;
  }
  enum Colours { RED, GREEN, BLUE } colour;
  switch (colour) {
  case RED:
    break;
  case GREEN:
    break;
  case BLUE:
    break;
  }
  return 0;
}