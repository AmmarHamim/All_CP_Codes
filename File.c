#include<stdio.h>
int main()
{
   FILE *fptr;
   char name[15];
   fptr=fopen("name.txt","w");

   if(fptr==NULL)
        printf("error");
   gets(name);
   fputs(name,fptr);
   printf("success");

   fclose(fptr);

    return 0;
}
