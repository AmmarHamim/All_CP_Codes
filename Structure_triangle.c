#include<stdio.h>
struct triangle
{
    float base;
    float height;
    float area;
};
int main()
{
    int n;
    printf("Enter number of triangles:");
    scanf("%d",&n);
    struct triangle t[n];
    for(int i=0; i<n; i++)
    {
        printf("Triangle %d\n",i+1);
        printf("Enter base:");
        scanf("%f",&t[i].base);
        printf("Enter height:");
        scanf("%f",&t[i].height);

        t[i].area= 0.5*t[i].base*t[i].height;
    }
    for(int i=0; i<n; i++)
    {
        printf("Triangle%d\n",i+1);
        printf("Base= %.2f\n",t[i].base);
        printf("Height=%.2f\n",t[i].height);
        printf("Area=%.2f\n",t[i].area);
    }
    return 0;
}

