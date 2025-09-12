#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25],s2[25],temp[25];

    printf("Enter string 1 = ");
    gets(s1);
    printf("Enter string 2 = ");
    gets(s2);

    printf("\n\nBefore swapping\n");
    printf("String 1 = %s\n",s1);
    printf("String 2 = %s\n",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\n\nAfter swapping\n");
    printf("String 1 = %s\n",s1);
    printf("String 2 = %s\n",s2);


    getch();
}
