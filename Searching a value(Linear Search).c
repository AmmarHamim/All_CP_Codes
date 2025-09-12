#include<stdio.h>
int main()
{
    int num[] = {23,45,34,22,33,50,122,123,98,69},i,value,pos=-1;

    printf("Enter the value you want to search= ");
    scanf("%d",&value);

    for(i=0; i<10; i++)
    {
        if( value == num[i])
        {
            pos=i+1;
            break;
        }
    }
     if( pos== -1)
        printf("Item not available\n");
    else
    printf("Position is = %d ",pos);


    getch();
}
