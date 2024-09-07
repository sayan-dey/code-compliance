
//All functions with void return type shall have external side effect(s).

#include <stdexcept> // for std::runtime_error

int x=100;

//Changing the value of a non local variable;
void func1() {
  x=50;
}

//Raising an exception.
void func2() {
    throw std::runtime_error("This function threw an exception!");
}

void func3()
{
  int y=10;
  y++;
}

int main() {
    func1(); //compliant
    func2(); //compliant
    func3(); //non-compliant (not able to detect)
    return 0;
}