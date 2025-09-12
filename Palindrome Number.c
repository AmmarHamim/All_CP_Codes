/*A palindromic number is a number that
remains the same when its digits are reversed */


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
        sum=sum*10+rem;
        temp=temp/10;

    }

    if(sum==num)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

}

    getch();
}


