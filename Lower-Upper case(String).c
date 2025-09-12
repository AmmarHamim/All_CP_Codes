#include<stdio.h>
#include<string.h>
int main()
{
    int choice,i;

    again:
    printf("Choose one:\n");
    printf("1. Convert a string from upper case to lower case\n");
    printf("2. Convert a string from lower case to upper case\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        char s1[30];
        printf("Enter the string: ");
        //gets(s1);
        scanf("%s",s1);
        //strlwr(s1);

        for (i=0;s1[i]!='\0';i++)
        {
            if (s1[i]>='A' && s1[i]<='Z')
            {
                s1[i]=s1[i]+32;
            }
        }
        printf("The lower case version: %s",s1);
    }
    else if(choice==2)
    {
        char s1[30];
        printf("Enter the string: ");
        //gets(s1);
        scanf("%s",s1);
        //strupr(s1);
         for (i=0;s1[i]!='\0';i++)
        {
            if (s1[i]>='a' && s1[i]<='z')
            {
                s1[i]=s1[i]-32;
            }
        }
        printf("The upper case version: %s",s1);
    }
    else
    {
        printf("Invalid Input\n");
        goto again;
    }


    getch();
}
