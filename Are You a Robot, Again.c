#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);

    if(strcmp(str,"!")==0)
    printf("?");

    return 0;
}


