#include<stdio.h>

void modify(char[],char[]);
void main()
{
    char str1[]="Ammar";
    char str2[]="hamim";
    modify(str1,str2);
}
void modify(char s1[],char s2[])
{
    int i,len=0;
    for(i=0;s1[i]!='\0';i++)
    {
        len=len+1;
    }
    s2[0]='H';
    printf("The length of s1=%d\n",len);
    printf("Both the strings are: %s %s\n",s1,s2);
}
