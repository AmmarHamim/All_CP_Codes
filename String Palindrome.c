#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];

    printf("Enter a string: ");
    gets(s1);

    strcpy(s2,s1);
    strrev(s2);

    int value = strcmp(s1,s2);
    if (value==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }


    getch();
}
