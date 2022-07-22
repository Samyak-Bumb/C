
/*
  Variable - A variable is a name of the memory location.
  It is used to store data (Data Type).
  Its value can be changed & it can be reused many times.
*/

/*
  Rules for defining variables:-
  1. A variable can have Alphabets(a-z), Digits(0-9) & Underscore(_).
  2. A variable name can start with the Alphabet & Underscore ONLY. It CAN'T start with a digit.
  3. NO Whitespace is allowed within the variable name.
  4. A variable name must NOT be any "Reserved Word" or "Keyword", E.g int, float, etc. (There are 32 Keywords in C)

  Valid variable names:
  int a;
  int _ab;
  int a30;

  Invalid variable names:
  int 2;
  int a b;
  int long;
*/

/*
  Types of Variables:
    There are many types of variables in c:

    1. Local variable
    2. Global variable
    3. Static variable
    4. aAutomatic variable
    5. External variable
*/

/*
  Data Type - A Data Type specifies the type of data that a variable can store such as integer, floating, character, etc.

  Let's see the basic data types. Its size is given according to 32-bit architecture.

    Data Types  Memory Size (bytes) Format Specifier
    char        1                   %c
    int         2                   %d, %i
    float       4                   %f
    double      8                   %
*/

#include <stdio.h>

int main()
{
  int a1;     // Declaration
  a1 = 10;    // Initialization
  int a2 = 1; // Declaration + Initialization

  int a = 89;             // Integer %d
  float b = 1.867465;     // Single-Precision Floating point value (Real Number) %f
  double c = 1.465413546; // Double-Precision Floating point value %lf
  char d = 'z';           // Single Character %c
  // char name[] = "Text";   // Array of Character %d
  int e = 10 + 10;

  printf("Value of \"a\" is %i\n", a); // %d for "Integers" (1,2,3,4 etc.)
  // printf("Value of \"b\" is %f\n", b);  // %f for "Real Values" (0.1, 1.2, 1.3 etc.)
  // printf("Value of \"c\" is %c\n", c);  // %c for "Characters" (a,B,c,D etc.)

  // printf("\"a\" + \"d\" = %d\n", a2 + a);
  // printf("\"e\" = %d", d);

  return 0;
}
