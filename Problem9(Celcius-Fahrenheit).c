#include<stdio.h>
int main(){

    while(1){

    int choice;
    printf("\n^_^Choose an option:\n");
    printf("1. Celcius to Fahrenheit\n");
    printf("2. Fahrenheit to Celcius\n");
    printf("Enter 1 or 2:");
    scanf("%d", &choice);

    if(choice == 1){

            double c,f;
            printf("\t\t\tCelcius:");
            scanf("%lf", &c);
            f=((9.0/5)*c)+32;
            printf("\t\t\tFahrenheit= %.2lf",f);

        } else if(choice == 2){

            double c,f;
            printf("\t\t\tFahrenheit:");
            scanf("%lf", &f);
            c=((f-32)/9.0)*5;
            printf("\t\t\tcelcius= %.2lf",c);


            } else {

             printf("\t\t\tInvalid Input\n\t\t\tTRY AGAIN");
            }


    }

 getch();
}
