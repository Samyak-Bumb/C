#include <stdio.h>

int main()
{
  int principal = 1000, rate = 8, time = 1;
  int simpleInterest = (principal * (1 + rate * time));

  /*
  Formula = A = P (1 + rt)

  A	=	final amount
  P	=	initial principal balance
  r	=	annual interest rate
  t	=	time (in years)
  */

  printf("Value is: %d", simpleInterest);

  return 0;
}
