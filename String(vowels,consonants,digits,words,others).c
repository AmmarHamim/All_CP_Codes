#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],ch;
    int i,vowel,consonant,word,digit,other;

    i=vowel=consonant=word=digit=other=0;

    printf("Enter a string: ");
    gets(s1);

    for(i=0;(ch=s1[i])!='\0';i++)
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            vowel++;
        }
        else if(ch>='a' && ch<='z'|| ch>='A' && ch<='Z')
        {
            consonant++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch==' ')
        {
            word++;
        }
        else
        {
            other++;
        }
    }
    word++;
    printf("Number of vowels= %d\n",vowel);
    printf("Number of consonants= %d\n",consonant);
    printf("Number of digits= %d\n",digit);
    printf("Number of words= %d\n",word);
    printf("Number of others= %d",other);


    getch();
}
