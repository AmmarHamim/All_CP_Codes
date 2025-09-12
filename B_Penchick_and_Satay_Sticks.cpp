#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }

         for(int i=1;i<n;i++)
         {
             if(v[i]-v[i+1]==1)swap(v[i],v[i+1]);
         }

         if(is_sorted(v.begin(),v.end()))yes;
         else no;
    }
    return 0;
}