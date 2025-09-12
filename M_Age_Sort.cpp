#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    while(1)
    {
        ll n;
        cin>>n;
        if(n==0)
        {
            break;
        }
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<v[n-1]<<endl;
        // cout<<endl;
        v.clear();
    }
    return 0;
}