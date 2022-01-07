#include <stdio.h>
int main()
{
char x;
printf("Enter any alphabet:");
scanf("%c",&x);
switch(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
{
case 1: printf("Alphabet is vowel");
break;
case 0: printf("Alphabet is consonant");
break;
}
return 0;
}
