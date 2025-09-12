#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],ch;
    gets(str);
    int j=0;
    for(int i=0;(ch=str[i])!='\0';i++)
    {
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        {
            str[j++]=str[i];
           //printf("%c",str[i]);
        }
    }
    str[j]='\0';
    puts(str);


    return 0;
}
