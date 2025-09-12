#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
   vector<int>v(n+1);
   for(int i=1;i<=n;i++)
   {
       cin>>temp;
       v[temp]=i;
   }
   for(int i=1;i<=n;i++)
   {
       cout<<v[i]<<" ";
   }


    return 0;
}
