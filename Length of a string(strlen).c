#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25];
    int count=0,i;

    printf("Enter a string: ");
    gets(s1);

    //count=strlen(s1);

    //puts(s1);
    //printf("The length of the string is = %d",count);

    //without function(for loop)
    /*for(i=0;s1[i]!='\0';i++)
    {
        count++;
    }
    printf("The length of the string is = %d",count);*/

    //while loop
    i=0;
    while(s1[i]!=0)
    {
        count++;
        i++;
    }
    printf("The length of the string is = %d",count);


    getch();
}
