#include<stdio.h>
struct company
{
    int numOfEmp;
    char name[30];
    char address[30];
    int phone;
};
int main()
{
    struct company comp;
    printf("Enter Company name:");
    gets(comp.name);
    printf("Enter Company address:");
    gets(comp.address);
    printf("Enter phone number:");
    scanf("%d",&comp.phone);
    printf("Enter the number of employees:");
    scanf("%d",&comp.numOfEmp);

    //printing
    printf("\n\nCompany details:\n");
    puts(comp.name);
    puts(comp.address);
    printf("%d\n",comp.phone);
    printf("%d",comp.numOfEmp);

    return 0;
}
