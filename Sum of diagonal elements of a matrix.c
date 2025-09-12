#include<stdio.h>
int main()
{
    int mat[10][10],row,col,i,j,sum=0;

again:
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);

    if(row!=col)
    {
        printf("Error!!Enter a square matrix\n");
        goto again;
    }
    else
    {
        //scaning the matrix
        printf("Enter the elements for the matrix.\n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("A[%d][%d]= ",i,j);
                scanf("%d",&mat[i][j]);
            }
            printf("\n");
        }
        //printing the matrix
        printf("A=\n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
        printf("Diagonal elements:");
        for (i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if (i==j)
                {
                    printf("%d ",mat[i][j]);
                    sum=sum+mat[i][j];
                }
            }
        }
        printf("\nDiagonal sum = %d",sum);
    }
}

getch();

