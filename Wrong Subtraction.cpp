#include<iostream>
using namespace std;
int main()
{
   long long int n,k;
   cin>>n>>k;

   long long int temp=n;
   for(int i=0;i<k;i++)
   {
      if(temp%10==0)
        temp=temp/10;
      else
        temp--;
   }
   cout<<temp;

    return 0;
}
