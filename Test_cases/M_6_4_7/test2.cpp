// The condition of a switch statement shall not have bool type

//All compliant testcase

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
        
        default:
            break;
    }


    return 0;
}