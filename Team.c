#include<stdio.h>
int main()
{
    int n,a,b,c;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a==1 && b==1|| a==1 && c==1|| b==1 && c==1)
        {
            count++;
        }
        
    }
    printf("%d",count);

    return 0;
}