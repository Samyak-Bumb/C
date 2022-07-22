// The ternary operator in C to run one code when the condition is true & another code when the condition is false.

#include <stdio.h>

int main()
{
  int a;

  printf("Hhh\n");
  scanf("%d", &a);

  // One liner if else (It's Fucking Hard)
  // But One Disadvantage "THIS IS NOT RECOMMENDED ✗"
  (a >= 18) ? printf("Can Vote") : printf("Cannot Vote");

  /*
  *Syntax Demo:-
    testCondition ? expression1 : expression 2;

  *Explantaion:- (But We Got a Fucking Easy/Awesome Explanation By which I can Understand I Don't care of You if Understood or Not ☠)
    The <testCondition> is a boolean expression that results in either true or false. If the condition is

      true - <expression1> (before the colon) is executed
      false - <expression2> (after the colon) is executed

  The ternary operator takes 3 operands (condition, expression1 and expression2). Hence,
    the name ternary operator.

    (
      c-if-else-vs-ternary-operator.jpg
      Ternary operator vs if…else
    )
*/
  return 0;
}
