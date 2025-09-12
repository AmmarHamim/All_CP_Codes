#include<stdio.h>


void sum()
{
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("Sum = %d\n",sum);
}
void sub()
{
    int a,b,sub=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sub = a - b;
    printf("Substraction = %d\n",sub);
}
void main()
{
    sum();
    sum();
    sub();
    sub();
}
