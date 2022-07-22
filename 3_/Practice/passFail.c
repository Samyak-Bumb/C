#include <stdio.h>

int main()
{
  int phy, maths, chem;
  float total;

  printf("Enter Phy Marks\n");
  scanf("%d", &phy);

  printf("Enter Maths Marks\n");
  scanf("%d", &maths);

  printf("Enter Chem Marks\n");
  scanf("%d", &chem);

  total = (phy + maths + chem) / 3;

  if ((total < 40) || phy < 33 || maths < 33 || chem < 33)
  {
    printf("Your Failed no need to see your percentage %f", total);
  }
  else
  {
    printf("Your Pass Get Out", total);
  }

  return 0;
}
