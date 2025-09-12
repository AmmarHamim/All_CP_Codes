#include<stdio.h>
int main()
{
    while(1)
    {
        int num,sum=0,temp,count=0;
        printf("Enter an Integer: ");
        scanf("%d",&num);

        temp=num;
        while(temp!=0)
        {
           temp=temp/10;
           count++;
        }
        printf("Total number of digits= %d\n",count);
    }
    getch();
}
