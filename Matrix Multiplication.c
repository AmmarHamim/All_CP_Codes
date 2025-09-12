#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],i,j,k,r1,c1,r2,c2,sum=0;
again:
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("\tERROR!! The number of columns of the first matrix is not equal to the number of rows of the second matrix\n\n");
        goto again;
    }
    else
    {
        //scaning the first matrix
        printf("\nEnter the elements for the first matrix.\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("First[%d][%d] = ",i,j);
                scanf("%d",&first[i][j]);
            }
            printf("\n");
        }
        //scaning the second matrix
        printf("\nEnter the elements for the second matrix.\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("Second[%d][%d] = ",i,j);
                scanf("%d",&second[i][j]);
            }
            printf("\n");
        }
        //printing the first matrix
        printf("First matrix =\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d ",first[i][j]);
            }
            printf("\n");
        }
        //printing the second matrix
        printf("Second matrix =\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d ",second[i][j]);
            }
            printf("\n");
        }
        //Multiplying first x second
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    sum = sum + first[i][k] * second[k][j];
                }
                result[i][j]=sum;
                sum=0;
            }
        }
        //printing the result
        printf("Multiplication is =\n");
        for(i=0;i<r1;i++)
        {
           for(j=0;j<c2;j++)
           {
               printf("%d ",result[i][j]);
           }
           printf("\n");
        }
    }

    getch();
}
