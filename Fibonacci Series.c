/*Fibonacci sequence is a sequence in which
each number is the sum of the two preceding ones */

#include<stdio.h>
int main()
{

    while(1)
    {



        int first=0,second=1,count=0,fibo,n;

        printf("Enter n=");
        scanf("%d",&n);

        while(count<n)
        {

            if(count<=1)
            {
                fibo=count;

            }
            else
            {

                fibo=first+second;
                first=second;
                second=fibo;
            }
            printf("%d ",fibo);
            count++;

        }
        printf("\n");
    }
    getch();
}

