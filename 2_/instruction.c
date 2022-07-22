#include <stdio.h>

int main()
{
  int x = 69, y, z; // Type Declaration Instrucion
  z = y = x;

  printf("Value is: %d\n", x);
  printf("Value is: %d\n", y);
  printf("Value is: %d\n", z);

  float a = 1.9;
  float b = a + 6.9;

  printf("Value is: %f", b);

  return 0;
}
