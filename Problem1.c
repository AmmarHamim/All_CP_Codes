#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    float avarage=(a+b+c)/3.0;

    printf("Value of a:%d\nValue of b:%d\nValue of c:%d",a,b,c);
    printf("\nAvarage of a,b and c:%.2f",avarage);

    return 0;
}
