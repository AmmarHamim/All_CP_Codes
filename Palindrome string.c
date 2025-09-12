#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101];
        gets(str);
        int len=strlen(str);
        int palindrome = 1;
        for(int i=0;i<len/2;i++)
        {
            if (str[i]!=str[len-i-1])
            {
                palindrome=0;
                break;
            }
        }
        if (palindrome==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
