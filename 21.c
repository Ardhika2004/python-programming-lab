#include <stdio.h>
int main()
{
int x,y,temp;
printf("Enter any two number: ");
scanf("%d%d",&x,&y);
temp=x;
x=y;
y=temp;
printf("\nAfter swapping x=%d, y=%d",x,y);
return 0;
}
