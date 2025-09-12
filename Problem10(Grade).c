#include<stdio.h>
int main()
{
    double x;

    printf("Enter your number:");
    scanf("%lf",&x);

    if(x<=100 && x>=80)
    {
        printf("\t\tGrade:A+");
    }
    else if(x<=79 && x>=70)
    {
        printf("\t\tGrade:A");
    }
    else if(x<=69 && x>=60)
    {
        printf("\t\tGrade:A-");
    }
    else if(x<=59 && x>=50)
    {
        printf("\t\tGrade:B");
    }
    else if(x<=49 && x>=40)
    {
        printf("\t\tGrade:C");
    }
    else if (x<=39 && x>=33)
    {
        printf("\t\tGrade:D");
    }
    else if(x<33)
    {
        printf("\t\tGrade:F");
    }




    return 0;
}
