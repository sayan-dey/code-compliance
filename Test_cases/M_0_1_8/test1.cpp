
//All functions with void return type shall have external side effect(s).

//Changing the value of an argument having reference type
void func1(int &x) {
  x=100;
}

void func2(int x)
{
  x=100;
}

int main() {
    int x=10;
    func1(x); //compliant
    func2(x); //non-compliant (not able to detect)
    return 0;
}