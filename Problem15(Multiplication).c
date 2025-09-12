#include<stdio.h>
int main()
{
    while(1)
    {

        int x,i;

        printf("Enter the input number:");
        scanf("%d",&x);

        printf("******Multiplication Table of %d ******\n",x);

        for(i=1; i<=10; i++)
        {

            printf("%d x %d = %d\n",x,i,x*i);
        }

    }

    getch();
}
