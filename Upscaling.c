#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int h=0;h<t;h++)
    {
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<2*n;i++)
        {
            for(int j=0;j<2*n;j++)
            {
                if((i+j)%2==0)
                    printf("#");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
    if(h!=t-1)
        printf("\n");
    }



    return 0;
}
