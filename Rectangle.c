#include<stdio.h>
int main()
{
    while(1)
    {


        int n,col,row;
        printf("Enter n= ");
        scanf("%d", &n);

        //Creating Row
        for(row=1; row<=n; row++)
        {
          for(col=1;col<=n;col++)
          {
              if(col==1||col==n || row==1||row==n)
                printf("*");
              else
                printf(" ");
          }
            printf("\n");

        }

    }

    getch();
}

