#include <stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
if((a+b)==(a^b))
printf("It is a valentine number");
else
printf("It is not a valentine number");
return 0;
}
