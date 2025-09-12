#include<stdio.h>

float mult(float,float);
void main()
{
    float num1,num2,result;
    printf("Enter two numbers you want to multiply: ");
    scanf("%f %f",&num1,&num2);

    result = mult(num1,num2);
    printf("Result= %.3f",result);
}
float mult(float a ,float b)
{
    float multi= a*b;
    return multi;
    return a;//unreachable

}

