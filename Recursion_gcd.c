#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else 
    return gcd(b%a,a);
}
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int res=gcd(num1,num2);
    printf("%d",res);
    return 0;
}