//Hexadecimal constants should be upper case.
#include <cstdint>

int main()
{
    std::int16_t a = 0x0c0f; //non-compliant (not throwing error)
    std::int16_t b = 0x0eFA; //non-compliant (not throwing error)
    std::int16_t c = 0x0CCC; //compliant
    int d = 0x0eFA; //non-compliant
    return 0;
}