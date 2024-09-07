
//A project shall not contain unreachable code


int main() {
  int var = 10;
  int a;
  if (var==10) {
    a =  1 ;
    return 0; //Reachable-compliant (Detecting as unreachable)
  }
  return 0; //Unreachable - non-compliant
}