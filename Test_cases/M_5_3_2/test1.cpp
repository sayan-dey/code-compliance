/*The unary minus operator shall not be applied to an
expression whose underlying type is unsigned.*/


//All compliant Testcase

int main() {
    
    unsigned int a = 25;
 
    int b = -a; 

    long int l1=-a;

    long long int l2=-a; 
    
    return 0;
}