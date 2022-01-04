#include <stdio.h>
int main()
{
int base,exp;
long double result=1.0;
printf("Enter base value: ");
scanf("%d",&base);
printf("Enter exponent value: ");
scanf("%d",&exp);
while(exp!=0)
{
result*=base;
--exp;
}
printf("answer=%.0Lf",result);
return 0;
}
