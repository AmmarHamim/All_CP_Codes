O#include<stdio.h>
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
        sum=sum*10+rem;
        temp=temp/10;

    }

    printf("Reverse of the digits = %d\n",sum);

}

    getch();
}

