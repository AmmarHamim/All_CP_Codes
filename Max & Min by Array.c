#include<stdio.h>
int main()
{
    int arr[20],i,n;
    printf("How many numbers?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",& arr[i]);
    }
    int max= arr[0],min= arr[0];
    for(i=0;i<n;i++)
    {
        if( max < arr[i] )
            max = arr[i];

        else if( min > arr[i])
            min = arr[i];
    }
    printf("Maximum= %d\n",max);
    printf("Minimum= %d",min);


    getch();
}
