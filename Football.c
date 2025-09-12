#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int zero=0,one=0;
    int flg=0;
    char str[101];
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='0')
        {
            zero++;
            one=0;
            if(zero>=7)
            {
                printf("YES\n");
                flg=1;
                break;
            }
        }
        else if(str[i]=='1')
        {
            one++;
            zero=0;
            if(one>=7)
            {
                printf("YES\n");
                flg=1;
                break;
            }
        }
    }
    //printf("%d %d",zero,one);
    if(flg==0)
    {
        printf("NO\n");
    }


    return 0;
}

