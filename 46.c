#include <stdio.h>
int main()
{
int i,count=0;
char x[15];
gets(x);
for(i=0;x[i]!='\0';i++)
{
count++;
}
printf("Length of a word is %d\n\n",count);
for(i=count;i>=0;i--)
{
printf("%c",x[i]);
}
return 0;
}
