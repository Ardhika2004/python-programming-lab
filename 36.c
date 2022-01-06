#include <stdio.h>
int main()
{
int x,b,c;
int num,n;
scanf("%d",&x);
num=x;
b=x%10;
x=x/10;
c=x%10;
x=x/10;
n=b*b*b+c*c*c+x*x*x;
if(num==n)
printf("The given value is armstrong");
else
printf("The given value is not armstrong");
return 0;
}