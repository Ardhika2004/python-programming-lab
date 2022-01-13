#include <stdio.h>
int main()
{
int num;
printf("Enter any number to check whether it is even or odd: ");
scanf("%d",&num);
if(num%2==0)
{
printf("Number is even");
}
else
{
printf("Number is odd");
}
return 0;
}
