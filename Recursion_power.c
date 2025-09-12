#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
double power(double base, double pow)
{
if(pow==0)
return 1;
else if(pow<0)
{
    return 1.0/power(base,-pow);
}
else
return base*power(base,pow-1);
}
int main()
{
    double b,p;
    printf("Enter base and power: ");
    scanf("%lf %lf",&b,&p);
    double result=power(b,p);
    printf("Result = %.2lf ",result);
    return 0;
}