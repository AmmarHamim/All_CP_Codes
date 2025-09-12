#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int even(int a,int b)
{
    if(a==b)
    {
        if(a%2==0)
        printf("%d\n",a);
        return 0;
    }

    else
    {
        // if(a%2==0)
        // printf("%d\n",a);
        even(a+1,b);
        if(a%2==0)
        printf("%d\n",a);
    }
    
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    even(a,b);
    return 0;
}