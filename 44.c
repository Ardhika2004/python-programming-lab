#include <stdio.h>
int main()
{
char x[15],i;
for(i=0;i<15;i++)
{
scanf("%c",x[i]);
}
for(i=0;x[i]!='\0';i++)
{
printf("%c",x[i]);
}
return 0;
}
