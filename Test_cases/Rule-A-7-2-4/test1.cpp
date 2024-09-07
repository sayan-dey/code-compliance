enum class Enum1 : char // Compliant (none)
{
 One,
 Two,
 Three
 };
 enum class Enum2 : char 
 {
 One,
 Two,
 Three ='3' // Non-compliant
 };
 enum class Enum3 : char // Compliant (the first)
 {
 One = '1',
 Two,
 Three
 };
 enum class Enum4 : char // Compliant (all)
 {
 One = '1',
 Two = '2',
 Three = '3'
 };