#include <stdio.h>

int main()
{
  int num;

  printf("Number: ");
  scanf("%d", &num);

  // If OutPut is Zero then it is divisible by enterd number
  printf("%d", num % 33);

  return 0;
}
