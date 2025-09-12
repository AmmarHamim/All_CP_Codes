#include<stdio.h>
int main()
{
    char op;
    double num1,num2;

    printf("Choose an Operator[+,-,*,/]: ");
    scanf(" %c",&op);

    printf("Enter two numbers:");
    scanf("%lf%lf",&num1,&num2);

    switch(op)
    {
       case '+':
           printf("%.3lf + %.3lf=%.3lf",num1,num2,num1+num2);
           break;
           case '-':
           printf("%.3lf - %.3lf=%.3lf",num1,num2,num1-num2);
           break;
           case '*':
           printf("%.3lf x %.3lf=%.3lf",num1,num2,num1*num2);
           break;
           case '/':
           printf("%.3lf / %.3lf=%.3lf",num1,num2,num1/num2);
           break;
           default :
            printf("Not a valid operator");

    }



    getch();
}
