#include<stdio.h>

int avg(int[],int);

void main()
{
    int marks[]= {10,20,30,40,50},n,average;
    n=sizeof(marks)/sizeof(marks[1]);

    average = avg(marks,n);

    printf("Average=%d\n",average);
    printf("Inside main,size of the array(in bytes) is : %d\n",sizeof(marks));
}
int avg(int marks1[],int size)
{
    int i,sum=0,avgf=0;
    for(i=0; i<size; i++)
    {
        sum=sum+marks1[i];
    }
    avgf=sum/size;
    printf("Inside avg,size of the array(in bytes) is : %d\n",sizeof(marks1));
    return avgf;
}
