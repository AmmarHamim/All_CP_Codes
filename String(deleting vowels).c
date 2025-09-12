#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[30],ch;
    int j=0;
    gets(str);

    for(int i=0;(ch=str[i])!=NULL;i++)
    {
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&&ch!='E'&&
           ch!='I'&&ch!='O'&&ch!='U')
        {
            str[j++]=str[i];
        }
    }
    str[j]=NULL;
    puts(str);


    return 0;
}

