
//Octal constants (other than 0) and octal escape sequences (other than "\0") shall not be used

int main(){
    char arr[2];
    arr[0] = '\109'; // Non-compliant - implementation-defined, two character constant (not able to detect)
    arr[1] = '\100'; // Non-compliant - set to 64 (not able to detect)
    return 0;
}