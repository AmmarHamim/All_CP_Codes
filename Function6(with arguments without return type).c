#include<stdio.h>

void div(float,float);
void main()
{
    float num,dom;
    printf("Enter the numerator: ");
    scanf("%f",&num);
    printf("Enter the dominator: ");
    scanf("%f",&dom);

    div(num,dom);
}
void div(float a ,float b)
{
   float result = a/b;
   printf("Result= %.3f",result);
}
