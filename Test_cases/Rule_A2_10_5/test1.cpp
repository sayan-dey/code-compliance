//An identifier name of a function with static storage duration or a
//non-member object with external or internal linkage should not be reused

// test1.cpp
namespace ns1
{
 static int globalvariable = 0;
}
static int newvar = 5; // Compliant - identifier not reused
static void Globalfunction();

