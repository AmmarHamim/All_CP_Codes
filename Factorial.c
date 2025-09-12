#include<stdio.h>
int main ()
{
    while(1)
    {
        int i,n,fact=1;
        printf("Enter any positive number: ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d is: %d\n",n,fact);


    }
    getch();
}
