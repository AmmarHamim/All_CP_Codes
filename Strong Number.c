/*Strong number is a special number whose sum of
 the factorial of digits is equal to the original number*/
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,temp,rem,i,fact,sum=0;
        printf("Enter an Integer: ");
        scanf("%d",&num);

        temp=num;
        while(temp!=0)
        {
            rem=temp%10;
            fact=1;
            for(i=1; i<=rem; i++)
            {
                fact=fact*i;
            }

            sum=sum+fact;
            temp=temp/10;
        }
        if(sum==num)
            printf("Strong Number\n");
        else
            printf("Not a Strong Number\n");

    }
    getch();
}
