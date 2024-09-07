// Only those escape sequences that are defined in ISO/IEC 14882:2014 shall
//be used.

#include <string>

int main() 
{
  const std::string a = "\k"; // Non-compliant (not throwing error)
  const std::string b = "\n"; // Compliant
  const std::string c = "\U0001f34c"; // Compliant 
}