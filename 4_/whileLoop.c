// The <while> loop loops through a block of code as long as a specified condition is true.

#include <stdio.h>

int main()
{
  int j;
  scanf("%d", &j);

  while (j < 10)
  {
    printf("%d\n", j);
    j++;
  }

  return 0;
}
