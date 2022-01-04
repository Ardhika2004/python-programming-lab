#include <stdio.h>
int main()
{
float cm,meter,km;
printf("Enter length in cm: ");
scanf("%f",&cm);
meter=cm/100;
km=cm/1000;
printf("Length in meter=%.2f m\n",meter);
printf("Length in km=%.2f km",km);
return 0;
}
