// The condition of a switch statement shall not have bool type

//All Non-compliant testcase

int main()
{
    int x=2;
    
    switch (x==5) {
        case 1:
            break;
 
        case 2:
            break;
 
        case 3:
            break;
    }


    double y=5.5;
    
    switch (y==8.8) {
        case 1:
            break;
 
        case 2:
            break;
 
        case 3:
            break;
    }


    return 0;
}