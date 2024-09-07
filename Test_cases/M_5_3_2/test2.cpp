/*The unary minus operator shall not be applied to an
expression whose underlying type is unsigned.*/

//All non-compliant Testcase

int main() {
    
    unsigned int a = 25;
 
    unsigned int b = -a;

    unsigned long int l1=-a;

    unsigned long long int l2=-a; 
    
    return 0;
}