#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int len1,len2;
    int i,j;

    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    i = 0; // for str1
    j = 0; // for str2

    while(i<len1&&j<len2)
    {
        // if characters match move to the next character in str2
        if (str1[i] == str2[j])
        {
            j++;
        }
        // move to the next character in str1
        i++;
    }

    // if all characters of str2 are found in str1, str2 is a subsequence of str1
    if (j==len2)
    {
        printf("%s is a subsequence of %s\n",str2,str1);
    }
    else
    {
        printf("%s is not a subsequence of %s\n",str2,str1);
    }

    return 0;
}
