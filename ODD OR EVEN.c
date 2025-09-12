#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\t\tEVEN");
    }
    else
    {
        printf("\t\tODD");
    }
    getch();
}
