#include<stdio.h>
int main()
{
    int first=2,second=1,count=1,lucas=0,n;
    printf("Enter n= ");
    scanf("%d",&n);
    printf("%d %d ",first,second);

    while(count<=n-2)
    {
       lucas=first+second;
       printf("%d ",lucas);
       first=second;
       second=lucas;
       count++;


    }


    getch();
}
