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
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.rbegin(),v.rend());

        ll teams=0,sz=0;
        for(int i=0;i<n;i++)
        {
            sz++;
            if(v[i]*sz>=x)
            {
                teams++;
                sz=0;
            }
        }

        cout<<teams<<endl;
    }
    return 0;
}