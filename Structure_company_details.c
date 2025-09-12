#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
struct company
{
    char name[30];
    char add[30];
    int phone;
    int numofemp;
};
int main()
{
    struct company comp;
    printf("Enter name:");
    gets(comp.name);
    printf("Enter address:");
    gets(comp.add);
    printf("Enter phone:");
    scanf("%d",&comp.phone);
    printf("Enter numofemp:");
    scanf("%d",&comp.numofemp);


    puts(comp.name);
    puts(comp.add);
    printf("%d\n",comp.phone);
    printf("%d\n",comp.numofemp);

    return 0;
}