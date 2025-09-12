#include<stdio.h>
int main()
{
    int N,h,width_1=0,width_2=0;
    scanf("%d %d",&N,&h);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<N;i++)
    {
        if(arr[i]<=h)
            width_1+=1;

            else
                width_2+=2;

    }
    printf("%d",width_1+width_2);
    return 0;
}


