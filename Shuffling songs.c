#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);

        char genres[n][10005];
        char writers[n][10005];

        for (int i=0;i<n;i++)
        {
            scanf("%s %s",genres[i],writers[i]);
        }

        int removals=0;
        for (int i=1;i<n;i++)
        {
            if (strcmp(genres[i],genres[i - 1])!=0 && strcmp(writers[i],writers[i - 1])!=0)
            {
                removals++;
            }
        }

        printf("%d\n",removals);
    }

    return 0;
}
