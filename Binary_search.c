#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //sort
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted arr: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int tar;
    printf("Enter the element you want to search: ");
    scanf("%d",&tar);
    //binary search
    int left=0,right=n-1;
    int foundi=-1;
    while(left<=right)
    {
         int mid=(left+right)/2;
         if(arr[mid]==tar)
         {
            foundi=mid;
            break;
         }
         if(arr[mid]<tar)
         left=mid+1;
         else if(arr[mid]>tar)
         right=mid-1;
    }
    if(foundi!=-1)
    printf("FOUND at index %d",foundi);
    else 
    printf("Not found");
    return 0;
}