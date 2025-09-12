#include<stdio.h>
#include<math.h>
int main()
{
    int mat[6][6],result=0;

    //scanning mat
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
     for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(mat[i][j]==1)
            {
                int r= abs(3-i);
                int c=abs(3-j);
                 result= r+c;
            }
        }
    }
    printf("%d",result);

    return 0;
}
