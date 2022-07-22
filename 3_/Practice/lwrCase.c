#include <stdio.h>

int main()
{
  /*
  ASCII Value:-

  * Deciaml = 97 - 122 = a-z
  * Hex = 64 - 7a = a-z

  * Decimal = 65 - 90 = A-Z
  * Hex = 41-5a = A-Z
  */
  char lwr;

  printf("Enter the Character\n");
  scanf("%c", &lwr);

  if (lwr <= 122 && lwr >= 97)
  {
    printf("Fuck It's Lowercase");
  }
  else
  {
    printf("Good Boy It's Not Lower Case, I think you'r a Professional (Just a Shit)");
  }

  return 0;
}
