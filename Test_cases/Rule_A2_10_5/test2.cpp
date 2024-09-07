// An identifier name of a function with static storage duration or a
// non-member object with external or internal linkage should not be reused

// test2.cpp
namespace ns1
{
  static int globalvariable = 0; // Non-compliant - identifier reused
  static int modulevariable = 10; // Compliant - identifier not reused
}
namespace ns2
{
  static int modulevariable2 = 20;
}
static void Globalfunction(); // Non-compliant - identifier reused
static int modulevariable2 = 15; // Non-compliant - identifier reused