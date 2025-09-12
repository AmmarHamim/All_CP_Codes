#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],str2[101],temp;
    gets(str);
    int j=0;
    for(int i=0; str[i]!=NULL; i++)
    {
        if(str[i]!='+')
        {
            str2[j]=str[i];
            j++;
        }
    }
    str2[j]='\0';
    for(int i=0; i<j; i++)
    {
        for(int k=i; k<j; k++)
        {
            if(str2[i]>str2[k])
            {
                temp=str2[i];
                str2[i]=str2[k];
                str2[k]=temp;
            }
        }
    }
    for(int i=0;i<j;i++)
    {
        printf("%c",str2[i]);
        if(i!=j-1)
            printf("+");
    }



    return 0;
}
