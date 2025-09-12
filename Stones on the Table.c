#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char str[n];

    gets(str);
    int count=0;

    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
