//There shall be no unnamed namespaces in header files.

// Header.hpp
namespace // Non-compliant
{
    extern int x;
    int y;
}