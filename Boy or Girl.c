#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[101],temp;
    gets(str);

    int len=strlen(str);

    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;

            }
        }
    }
    int count=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]!=str[i+1])
        count++;

    }

    //printf("%d",count);
    if(count%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");


    return 0;
}

