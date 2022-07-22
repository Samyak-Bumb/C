/*
  Switch Statement:-
  Instead of writing many if..else statements, you can use the switch statement.

  We can define various statements in the multiple cases for the different values of a single variable

  break; - The break statement ends the loop immediately when it is encountered.
*/

#include <stdio.h>

int main()
{
  int rate;
  printf("Give Rating Or Just Leave it\n");
  scanf("%d", &rate);

  switch (rate)
  {
  case 1:
    printf("Rating is 1, We will not try to Improve");
    break;
  case 2:
    printf("Rating is 2, Ok Neutral Rating");
    break;
  case 3:
    printf("Rating is 3, What 3 Rating we will try too make our service More Worse and Worse");
    break;

  default:
    printf("彡Fuck You彡");
    break;
  }

  return 0;
}
