#include<stdio.h>
int main()
{
    char str[]= "Welcome home";
    char *p = &str;

    printf("%c\n",*p);
    printf("%c\n",*(p++ + 1));
    printf("%c\n",*((p-- +4)-1)+3);
    printf("%c\n",*p);
    printf("%c\n",*(++p +7)-32);
    printf("%c %c %c\n",*p,*++p,*--p);


    getch();
}
