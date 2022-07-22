#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter the 1st value\n"); // It is used for "Output"
  scanf("%d", &a);                 // It is used for "Input"

  printf("Enter the 2nd value\n");
  scanf("%d", &b);

  printf("\"a\" + \"b\" = %d", a + b);

  return 0;
}
