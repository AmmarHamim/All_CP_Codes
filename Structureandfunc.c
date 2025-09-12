#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    char address[20];
    int age;
    float average;
};
void studentdetails(struct student s[]);
int main()
{
    struct student s[12];

    //input
    for(int i=0; i<12; i++)
    {
        printf("student %d\n",i+1);
        printf("Enter Roll No:");
        scanf("%d", &s[i].roll);
        printf("Enter Name:");
        scanf("%s", s[i].name);
        printf("Enter Address:");
        scanf("%s", s[i].address);
        printf("Enter Age:");
        scanf("%d", &s[i].age);
        printf("Enter Average Marks:");
        scanf("%f", &s[i].average);
    }
    studentdetails(s);

    return 0;
}
void studentdetails(struct student s[])
    {
        for(int i=0; i<12; i++)
        {
            printf("\nRoll No:%d\n", s[i].roll);
            printf("Name:%s\n", s[i].name);
           printf("Address:%s\n", s[i].address);
            printf("Age:%d\n", s[i].age);
           printf("Average Marks:%.2f\n", s[i].average);
        }
    }
