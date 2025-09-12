#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        char str[6];
        scanf("%s",str);
        int h,m;
        h = (str[0] - '0') * 10 + (str[1] - '0');
        m = (str[3] - '0') * 10 + (str[4] - '0');

        char period[3];
        if(h>=12)
        {
            period[0]='P';
            if(h>12)
                h=h-12;
        }
        else
        {
            period[0]='A';
            if(h==0)
                h=12;
        }
        period[1]='M';
        period[2]='\0';

        printf("%02d:%02d %s\n",h,m,period);


    }

    return 0;
}


