#include<stdio.h>
int main()
{
    while(1)
    {

        int n,i,count=0;
        printf("Enter n=");
        scanf("%d",&n);

        for(i=2; i<n; i++)
        {

            if (n%i==0)
            {
                count++;
                break;
            }

        }
        if(count==0)
            printf("Prime Number\n");
        else
            printf("Not a Prime Number\n");


    }
    getch();
}
