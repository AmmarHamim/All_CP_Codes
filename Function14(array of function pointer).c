#include<stdio.h>

void sum(float a,float b)
{
    printf("sum=%.3f\n",a+b);
}
void sub(float a,float b)
{
    printf("sub=%.3f\n",a-b);
}
void multi(float a,float b)
{
    printf("multi=%.3f\n",a*b);
}
void div(float a,float b)
{
    printf("div=%.3f\n",a/b);
}
int main()
{
    int choice;
    float num1,num2;
    void (*fptr[5])(float,float)= {sum,sub,multi,div};

    printf(" 1 for addition\n 2 for substraction\n 3 for multiplication\n 4 for division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if (choice>4||choice<1)
    {
        printf("Not a valid choice\n");
        return 1;//exit from the program
    }
    printf("Enter num1 and num2: ");
    scanf("%f %f",&num1,&num2);

    fptr[choice-1](num1,num2);

    getch();
}
