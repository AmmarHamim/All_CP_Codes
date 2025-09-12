#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n,flg=0;
        scanf("%d",&n);
        int temp=n;
        while(temp!=0)
        {
            int rem=temp%10;
            temp=temp/10;
            if(rem==0||rem==1)
            flg=1;

        }
        if(flg==1)
            printf("YES\n");

        int temp2=n;
       while(temp2!=1)
       {
           int r=temp2/11;
           temp2=temp2/
       }

    }

    return 0;
}


