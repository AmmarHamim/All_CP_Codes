 #include<stdio.h>
 #include<string.h>
 int main()
 {
     int n,X=0;
     scanf("%d",&n);
     char str[4];
     for(int i=0;i<n;i++)
     {
        scanf("%s",str);
        if(strcmp(str,"++X")==0 || strcmp(str,"X++")==0)
        {
            ++X;
        }
        else if(strcmp(str,"--X")==0 || strcmp(str,"X--")==0)
        {
            --X;
        }

     }
     printf("%d\n",X);
     return 0;
 }