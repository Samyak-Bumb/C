/*
  Unlike <for> and <while> loops, which test the loop condition at the top of the loop, the do...while loop in C programming checks its condition at the bottom of the loop.

  Do...While :- A <do...while> loop is similar to a <while> loop, except the fact that it is guaranteed to "Execute at least one time".
*/

#include <stdio.h>

int main()
{
  int j = 1;

  do
  {
    printf("%d\n", j);
    j++;
  } while (j < 10);

  return 0;
}
