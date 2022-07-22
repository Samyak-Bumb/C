#include <stdio.h>

int main()
{
  int a = 4;
  int b = 46;

  printf("Val of 7 * a - 7 * b is: %d\n", 7 * a - 32 * b);
  printf("Val of 7 * a - 7 * b is: %d\n", 7 * (a - 32 * b));

  int y = 3;
  int z = 2;

  printf("Val of 3 * y / 8 * z is: %d\n", 6 * y / 4 * z);

  return 0;
}
