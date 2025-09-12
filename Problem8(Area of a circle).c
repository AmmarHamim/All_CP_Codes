#include<stdio.h>
int main(){

    double radius;
    double area;
    double pi=3.1416;


    printf("Enter the radius of the circle:");
    scanf("%lf",&radius);

        area= pi*radius*radius;


    printf("\t\t\tThe area of the Circle is=%.2lf",area);


return 0;
}
