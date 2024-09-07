
//A project shall not contain unreachable code

int main() {
  int x = 2;
  int local;
  
  switch (x)
  {
    local = 10; // unreachable – Non-compliant (Not able to detect this)
    case 1:
    {
        break;
    }
    default:
    {
        break;
    }
  }
  return 0;
  x++;  // unreachable – Non-compliant (not able to detect this)
}