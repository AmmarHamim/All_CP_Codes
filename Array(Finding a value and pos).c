#include<stdio.h>
int main()
{
    int arr[]={4,5,6,7,6,8,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value,count=0;
    int pos[size];

    printf("Enter the value you want to find:");
    scanf("%d",&value);

    for(int i=0;i<size;i++)
    {
        if(value==arr[i])
        {
            pos[count]=i+1;
            count++;
        }
    }
    if(count>0)
    {
        printf("Value %d is found at the position:",value);
        for(int i=0;i<count;i++)
        {
            printf("%d ",pos[i]);
        }
    }
    else
        printf("Not found");


    getch();
}
