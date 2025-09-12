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
        int n;cin>>n;

        int l=1;int r=n;

         for(int i=1;i<=n;i++)
         {
             if(i&1)
             {
                cout<<l<<" ";
                l++;
             }
             else
             {
                cout<<r<<" ";r--;
             }
         }
         cout<<endl;
    }
    return 0;
}