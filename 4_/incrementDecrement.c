#include <stdio.h>

int main()
{
  int j = 68;

  printf("%d\n", ++j); // j = j + 1
  printf("%d\n", j);
  printf("%d\n", j--); // j = j + 1

  // j++; // First print then Increment
  // --j; // First Increment then print

  return 0;
}

/*
 * z = 5
 * ++z;     // z becomes 6
 * z++;     // z becomes 7
 * --z;     // z becomes 6
 * z--;     // z becomes 5
 */

/*
  ++ and -- operator as prefix and postfix:-


    If you use the ++ operator as a prefix like:
      <++var>, the value of var is Incremented by 1;
    then it returns the value.

    If you use the ++ operator as a postfix like:
      <var++>, the original value of var is returned first;
    then var is "Incremented by 1".

  The -- operator works in a similar way to the ++ operator except -- decreases the value by 1.
*/

/*
  • Pre-Increment Operator
  • Post-Increment Operator

  ➤ Pre-increment operator: A pre-increment operator is used to increment the value of a variable before using it in an expression. In the Pre-Increment, value is first incremented and then used inside the expression.
  a = ++10;

  ➤ Post-increment operator: A post-increment operator is used to increment the value of the variable after executing the expression completely in which post-increment is used. In the Post-Increment, value is first used in an expression and then incremented.
  a = 10++;
*/
