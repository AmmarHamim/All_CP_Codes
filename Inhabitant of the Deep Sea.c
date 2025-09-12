#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<k; i++)
        {
            if(arr[0]!=0)
            {
                arr[0]-1;
                move++;
            }
            if(arr[0]==0)
            {
                n--;
                for(int i=0; i<n; i++)
                {
                    arr[i]=arr[i+1];

                }
            }

        }

    }
    return 0;
}

