#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    gets(str);

    int i=0;
    int word=1;
    while(str[i]!=NULL)
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
            word++;
            i++;
    }

    printf("%d",word);

    return 0;
}
