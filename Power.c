#include<stdio.h>
int main(){

    double x,y,r;

    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter y:");
    scanf("%lf", &y);

    r = pow(x,y);
    printf("Result= %.2lf", r);


getch();
}
