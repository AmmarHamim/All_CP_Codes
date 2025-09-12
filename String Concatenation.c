#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[20];
    int i,l1,l2;

    printf("Enter s1:");
    gets(s1);
    printf("Enter s2:");
    gets(s2);


    //strcat(s1,s2);
    //printf("String after concatenation is = %s\n",s1);
    //puts(s2);

    l1=strlen(s1);
    l2=strlen(s2);

    //with for loop
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("String after concatenation is = %s\n",s1);
    puts(s2);



    getch();
}
