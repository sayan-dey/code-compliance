// The final clause of a switch statement shall be the default-clause.

//All Non-compliant testcase

int main()
{
    int x=2;
    
    switch (x) {
        case 1:
            break;
 
        case 2:
            break;
 
        case 3:
            break;
    }


    return 0;
}