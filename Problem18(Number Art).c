#include<stdio.h>
int main ()
{

    int col,row,n,num=0;

    printf("Enter n=");
    scanf("%d",&n);

    //Creating Rows
    for(row=n; row>=1; row--)
    {
        //Creating Column
        for(col=1; col<=row; col++)
        {

            //Printing Numbers
            printf("%d",row);
        }
        printf("\n");
    }

    return 0;
}
