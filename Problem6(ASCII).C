#include<stdio.h>
int main(){

    int choice;
    printf("Choose an option:\n");
    printf("1.Convert ASCII to Character\n");
    printf("2.Convert Character to ASCII\n");
    printf("Enter 1 or 2:\n");
    scanf("%d",&choice);


    if(choice==1){

        int a;
        printf("Enter any ASCII value:");
        scanf("%d",&a);

        printf("The Character for the ASCII value %d is: %c",a,(char)a);


    } else if(choice==2){

            char b;
            printf("Enter any Character:\n");
            scanf(" %c",&b);

            printf("The ASCII value for the Character %c is: %d",b,(int)b);

    }

    else {

        printf("Invalid choice. Please enter 1 or 2.\n");
    }

return 0;


}
