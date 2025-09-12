#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter starting and ending number:");
    scanf("%d %d",&start,&end);

    for(int i=start;i<=end;i++)
    {
        int prime=1;
        for(int count=2;count<i;count++)
        {
            if(i%count==0)
            {
                prime=0;
                break;
            }
        }
        if(prime && i>1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}


