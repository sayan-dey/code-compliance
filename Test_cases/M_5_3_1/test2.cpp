/*Each operand of the ! operator, the logical && or the
logical || operators shall have type bool.*/

//All non-compliant Testcase

int main(){
    int a=80, b=90, c=60, d=50;
    if (a || (c < d))     
    if (5 && (c < d)) 
    if ((a+b) || (c<d))

    if(!a)

    return 0;
}