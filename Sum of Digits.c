#include<stdio.h>
int main()
{ while(1)
{
    int num,rem,temp,sum=0;

    printf("Enter any positive number: ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=rem+sum;
        temp=temp/10;

    }

    printf("Sum of digits = %d\n",sum);

}

    getch();
}
