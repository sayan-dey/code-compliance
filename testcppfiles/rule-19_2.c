#include <stdint.h>

union MyUnion {  // Union declaration
  int myNum;     // Member (int variable)
  char myLetter; // Member (char variable)
};

uint32_t zext(uint16_t s) {
  union {
    uint32_t ul;
    uint16_t us;
  } tmp;
  tmp.us = s;
  return tmp.ul; /* unspecified value */
}