#include<stdio.h>
int main()
{
    int a[10][10],row,col,i,j;

    printf("Enter the number of rows and column: ");
    scanf("%d %d",&row,&col);

    //scaning A
    printf("Enter the elements of A matrix.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //printing A
    printf("A=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //tranpose
    printf("Transpose of A=\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }


    getch();
}
