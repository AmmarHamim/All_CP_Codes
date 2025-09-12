#include<stdio.h>
int fibo();
int main()
{
    int n,fib;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        fib=fibo(i);
        printf("%d ",fib);
    }
}
int fibo(int n)
{
    if(n<=1)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}


