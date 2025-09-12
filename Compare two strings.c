#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    int i,count=0;

    printf("Enter string 1= ");
    gets(s1);
    printf("Enter string 2= ");
    gets(s2);

    /*int value = strcmp(s1,s2);

     if(value==0)
     {
         printf("Both Strings are same");
     }
     else
     {
         printf("Not same");
     }*/

    for(i=0; s1[i]!='\0' || s2[i]!='\0'; i++)
    {
        if(s1[i]!=s2[i])
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Both strings are same");
    }
    else
    {
        printf("Not same");
    }


    getch();
}
