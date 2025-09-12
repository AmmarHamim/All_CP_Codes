#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);

    for (int i=0;i<t;i++)
    {
        char string[101];
        scanf("%s",string);

        if (strstr(string,"it") != NULL)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

