#include <stdio.h>
#include<math.h>
int main()
{
int phy,chem,bio,maths,comp;
float percentage;
printf("Enter five subjects marks: ");
scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&comp);
percentage = (phy+chem+bio+maths+comp)/5.0;
printf("Percentage = %.2f\n",percentage);
if(percentage>=90)
{
printf("Grade A");
}
else if(percentage>=80)
{
printf("Grade B");
}
else if(percentage>=70)
{
printf("Grade C");
}
else if(percentage>=60)
{
printf("Grade D");
}
else if(percentage>=40)
{
printf("Grade E");
}
else
{
printf("Grade F");
}
return 0;
}
