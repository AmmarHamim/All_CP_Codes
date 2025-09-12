#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
int rev=0;
int reverse(int n)
{
    int temp = n;
    if (temp == 0)
        return rev;
    else
    {
        int rem = temp % 10;
         rev = rev * 10 + rem;
         reverse(temp / 10);
    }
    //return rev;
}
int main()
{
    int n;
    scanf("%d", &n);
    int result = reverse(n);
    printf("%d",result);
    return 0;
}