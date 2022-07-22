#include <stdio.h>
#include <math.h>

int main()
{
  int a = 10;
  int b = 20;
  int c = 30;
  c = b * a;

  printf("a + b is: %d\n", a + b);
  printf("a - b is: %d\n", a - b);
  printf("a * b is: %d\n", a * b);
  printf("a / b is: %d\n", a / b);
  printf("a %% b is: %d\n", a % b); // remainder after division (modulo division)
  printf("c is: %d\n", c);

  // NO Operator is assumed to be present like this:
  // printf("10 * 10 is: %d", (10)(10)); // NOT Allowed it will throw an error
  printf("10 * 10 is: %d\n", (10) * (10));

  // NO Operator is Available for "Exponentiation"
  // NOTE:- "^" is a Bitwise Operator
  printf("2 ^ 3 is: %d\n", 2 ^ 3); // It can't give 2 to the power 3

  // You Can do it by another way by using inBuilt Function called "pow".
  // Also you want to #include <math.h>
  // Don't put "%d", Always put "%f"
  printf("2 to the power 3 is: %f\n", pow(2, 3));

  printf("9 + 7 is: %d\n", 9 + 7);     // Interger Wins (Of Course cuz there's NO float val)
  printf("9 + 7.3 is: %f\n", 9 + 7.3); // BUT if float is added %f will win

  printf("3.0 / 9 is: %f", 3.0 / 9);

  return 0;
}
