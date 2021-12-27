#include<stdio.h>
#include<math.h>
int main()
{
float cm,meter,km;
printf("Enter lengthin centimeter: ");
scanf("%f",&cm);
meter=cm/100;
km=cm/1000;
printf("Length in meter=%.2f m\n",meter);
printf("Length in km=%.2f km",km);
return 0;
}
