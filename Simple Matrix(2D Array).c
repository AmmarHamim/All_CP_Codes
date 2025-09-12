#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfCols;
    int A[10][10],B[10][10];
    printf("Enter the number of Rows and Coloums: ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    //Scaning A matrix
    printf("\n\nEnter elements for A matrix.\n");
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //Printing matrix A
    printf("A = ");
    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");

    }

    //Scaning B matrix
    printf("\n\nEnter elements for B matrix.\n");
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //Printing matrix B
    printf("B = ");
    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",B[i][j]);

        }
        printf("\n");
    }





    getch();
}
