#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
   int z=0;
   int mycoin=v[z];
   int sum=0;
   int ct=1;
   hamim:
   for(int i=z+1;i<n;i++)
   {
    sum+=v[i];
   }
   if(mycoin<=sum)
   {
    z++;
    mycoin+=v[z];
    sum=0;
    ct++;
    goto hamim;
   }
   cout<<ct<<endl;
    return 0;
}