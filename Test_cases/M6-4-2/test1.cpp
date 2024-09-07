
//All if ... else if constructs shall be terminated with an else clause.

int main()
{
    int x=5;
    int y=6;

    //Compliant

    if(x==5)
    x++;

    //Compliant

    if ( x < 0 )
    {
        x = 0;
    }
    else if ( y < 0 )
    {
        x = 3;
    }
    else 
    {
        x=6;
    }

    //Non-compliant

    if(x==5)
    x++;
    else if(x>5)
    x--;

    return 0;
}