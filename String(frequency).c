#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int count=0;
    printf("Enter the string:");
    gets(str);
    printf("Enter the character to calculate it's frequency: ");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}