#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],temp;
    int i=0,len=0;

    printf("Enter a string: ");
    gets(s1);

    //strrev(s1);
    //printf("Reverse = %s",s1);

    //without strrev funtion
    while(s1[i]!=0)
    {
        len++;
        i++;
    }
    for(i=0;i<len/2;i++)
    {
        temp=s1[i];
        s1[i]=s1[len-1-i];
        s1[len-1-i]=temp;
    }
    printf("Reverse = %s",s1);


    getch();
}
