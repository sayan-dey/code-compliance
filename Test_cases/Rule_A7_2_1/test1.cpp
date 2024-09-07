// An expression with enum underlying type shall only have values
// corresponding to the enumerators of the enumeration.

enum class E : int { Ok = 0, Repeat, Error };
E Convert1(int number) noexcept {
  E result = E::Ok; // Compliant
  switch (number) { //Showing error here
  case 0: {
    result = E::Ok; // Compliant
    break;
  }
  case 1: {
    result = E::Repeat;

    break;
  }
  case 2: {
    result = E::Error; // Compliant
    break;
  }
  case 3: {
    constexpr int val = 3;
    result = static_cast<E>(val); // Non-compliant - value 3 does not
                                  // correspond to any of E’s
                                  // enumerators
    break;
  }
  default: {
    result = static_cast<E>(0); // Compliant - value 0 corresponds to E::Ok
    break;
  }
  }
  return result;
}
E Convert2(int userInput) noexcept {
  E result = static_cast<E>(userInput); // Non-compliant - the range of
  // userInput may not correspond to
  // any of E’s enumerators
  return result;
}
E Convert3(int userInput) noexcept {
  E result = E::Error;
  if (userInput < 3) { //showing error here
    result = static_cast<E>(userInput); // Compliant - the range of
                                        // userInput checked before casting
                                        // it to E enumerator 
                                        // showing error here
  }
  return result;
}