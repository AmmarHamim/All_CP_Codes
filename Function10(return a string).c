#include<stdio.h>

char* display();

void main()
{
    char* str1;
    str1=display();
    str1[0]='H';
    printf("The string is: %s",str1);
}

char* display()
{
    static char str2[]="hamim";
    return str2;
}
