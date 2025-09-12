#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],temp;
    gets(str);
    for(int i=0; str[i]!=NULL; i++)
    {
        for(int j=i; str[j]!='\0'; j++)
        {
            if(str[i]!='+'&&str[j]!='+')
            {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
            }
        }
    }
    for(int i=0;i<strlen(str);i++)
    {
        printf("%c",str[i]);
    }



    return 0;
}


