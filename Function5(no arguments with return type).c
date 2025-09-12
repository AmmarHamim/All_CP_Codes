#include<stdio.h>

char ch(void);
void main()
{
    char result=ch();
    printf("returned= %c",result);
}
char ch()
{
    char c;
    printf("Enter any character: ");
    scanf(" %c",&c);
    return c;
    return 'a';//unreachable
}
