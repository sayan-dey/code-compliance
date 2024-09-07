
//Octal constants (other than 0) and octal escape sequences (other than "\0") shall not be used

int main(){
    int arr[4];
    arr[0] = 100;
    arr[1] = 046; //non-compliant
    arr[2] = 053; //non-compliant
    arr[3] = 109;
    return 0;
}