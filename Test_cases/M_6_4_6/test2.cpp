// The final clause of a switch statement shall be the default-clause.

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

    enum Colours { RED, BLUE, GREEN } colour;

    switch (colour)
    {
        case RED:
            break;
        case BLUE:
            break;
        case GREEN:
            break;
    }


    return 0;
}