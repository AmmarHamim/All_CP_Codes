#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int s=0;
int sumdgt(int temp)
{
    if(temp==0)
    return s;
    else
    {
        int rem=temp%10;
        s+=rem;
        sumdgt(temp/10);
        return s;
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=sumdgt(n);
    printf("%d",sum);
    return 0;
}