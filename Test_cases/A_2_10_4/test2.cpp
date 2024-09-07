#include<iostream>

// test2.cpp
namespace ns11
{
  static int var = 0; // Non-compliant - identifier reused
// in ns1 namespace in test1.cpp
}

int main()
{
    int x;
    return 0;
}