#include<stdio.h>
#include<math.h>
int main()
{
float WCF,t,v,a,b,c;
printf("\n1.Enter the temperature: ");
scanf("%f",&t);
printf("\n2.Enter the wind velocity:");
scanf("%f",&v);
a= 35.74 + (0.6215*t);
b= (0.4275*t) - 35.75;
c = pow(v,0.16);
WCF = a+(b*c);
printf("\nThe Wind chill factor is %f",WCF);
return 0;
}