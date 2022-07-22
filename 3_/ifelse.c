/*
  The if-else statement is used to perform the operations based on some "Specific Condition"
  The operations specified in if block are executed if and ONLY if the given condition is true
*/

#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter number\n");
  scanf("%d", &a);

  if (a % 2 == 0)
  {
    printf("%d is even\n", a);
  }
  else
  {
    printf("%d is odd", a);
  }

  return 0;
}
