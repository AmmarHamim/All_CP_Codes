#include<stdio.h>
int main()
{
    while(1)
    {

        int row,col,n,num=1;
        printf("Enter n= ");
        scanf("%d",&n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=row; col++)
            {
                printf("%d ",num);
                num++;
            }

            printf("\n");
        }

    }
    getch();
}
