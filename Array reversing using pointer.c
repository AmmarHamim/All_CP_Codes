#include<stdio.h>
void reverseArr(int* arr,int n)
{
    int* ptr_start=arr;//pointing to the first element
    int* ptr_end=arr+n-1;//pointing to the last element

    while(ptr_start<ptr_end)
    {
        int temp=*ptr_start;
        *ptr_start=*ptr_end;
        *ptr_end=temp;

        *ptr_start++;
        *ptr_end--;
    }
}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

   printf("Original array: ");
   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }

   reverseArr(arr,n);

   printf("\nArray after reversing: ");
   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }

    return 0;
}
