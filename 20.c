#include<stdio.h>
int main ()
{
int n,firstDigit,lastDigit;
printf("Enter any number: ");
scanf("%d",&n);
lastDigit=n%10;
while(n>=10)
{
n=n/10;
}
firstDigit=n;
printf("First digit=%d and lastDigit=%d",firstDigit,lastDigit);
return 0;
}
