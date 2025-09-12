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
            //Creating Space
            for(col=1; col<=n-row; col++)
                printf(" ");
            // Printing Stars
            for(col=1; col<=2*row-1; col++)
                printf("*");

            printf("\n");
        }

    }

    
}
