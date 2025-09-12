#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b;
        int cost1=0,cost2=0,cost3=0;
        scanf("%d %d %d",&n,&a,&b);

        if(n%2==0)
        {
            cost1=n*a;
            cost2=(n/2)*b;
            if(cost1<cost2)
                printf("%d\n",cost1);
            else
                printf("%d\n",cost2);
        }
        else
        {
            cost1=(n/2)*b+a;
            cost2=((n/2)+1)*b;
            cost3=n*a;
            if(cost1<cost2 && cost1<cost3)
                printf("%d\n",cost1);
            else if(cost2<cost3 &&cost2<cost1)
                printf("%d\n",cost2);
            else
                printf("%d\n",cost3);
        }

    }
    return 0;
}
