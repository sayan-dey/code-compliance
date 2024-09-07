//% $Id: A2-10-4.cpp 305382 2018-01-26 06:32:15Z michal.szczepankiewicz $
#include <iostream>
// test1.cpp
namespace ns11
{
 static int var = 0;
}

namespace ns2
{
 static int globalvariable =
 0; // Compliant - identifier reused, but in another namespace
}
