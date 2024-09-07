//Volatile keyword shall not be used.

int main()
{
    volatile bool flag = false; //non-compliant
    volatile sig_atomic_t signal_flag = 0; //non-compliant
    return 0;
}