//There shall be no unnamed namespaces in header files.

// test2.cpp
#include "Header.hpp"
namespace
{
    int x;
}
void fn_b ( void )
{
    fn_a ( );
    if ( x == 24 ) // This x will not have been initialized.
    {
        return;
    }
}