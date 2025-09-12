#include<stdio.h>
#include<string.h>
int main()
{
    char main[]= "C Programming";
    char target[20];

    strcpy(target,main);

    //printf("Main string = %s\n",main);
    //printf("Target string = %s",target);
    puts(main);
    puts(target);


    getch();
}
