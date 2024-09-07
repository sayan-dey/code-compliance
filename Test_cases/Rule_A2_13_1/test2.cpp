// Only those escape sequences that are defined in ISO/IEC 14882:2014 shall
//be used.

#include <string>

int main() 
{
  const std::string a = "\z"; // Non-compliant (not throwing error)
  const std::string b = "\m"; // Non-compliant (not throwing error)
  const std::string c = "\t"; // Compliant
  const std::string d = "\r"; // Compliant
  const std::string e = "\?"; // Compliant
  const std::string f = "\U0001f34c"; // Compliant 
}