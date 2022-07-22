#include <stdio.h>

int main()
{
  int age;
  printf("Enter Your  Age\n");
  scanf("%d", &age);

  if (age >= 80)
  {
    printf("Chill at Home your too Old");
  }
  else if (age == 18)
  {
    printf("Ohh You Just turned 18 Now you can Drive");
  }
  else if (age == 50)
  {
    printf("Your Half Century is Completed, You can drive but Take Care");
  }
  else if (age > 18 && age < 80)
  {
    printf("If you want to drive you can else, do Somthing New in your life just watching T.V/Mobile/Computer/Laptop");
  }
  else
  {
    printf("Just Sleep in Bed you can't Drive");
  }

  return 0;
}
