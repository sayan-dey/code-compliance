//Hexadecimal constants should be upper case.
#include <cstdint>

int main()
{
    std::int16_t a = 0x0f0f; //non-compliant (not throwing error)
    std::int16_t b = 0x0f0F; //non-compliant (not throwing error)
    std::int16_t c = 0x0F0F; //compliant

    return 0;
}