#include<stdio.h>
int main()
{
    int n,pos,element;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to insert: ");
    scanf("%d",&pos);
    printf("Enter the element: ");
    scanf("%d",&element);
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos]=element;
    n++;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
