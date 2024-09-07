//The identifier main shall not be used for a function other than the global
//function main.

int main ( ) // Compliant
{

}
namespace NS1
{
    int sum(int x, int y)
    {
        return x+y;
    }
    int main ( ) // Non-compliant
    {

    }
}
namespace NS2
{
    int main ( ) // Non-compliant
    {
        int x=5;
        int y=6;
        int s=x+y;
    }

    void main() //Non-compliant
    {

    }
}