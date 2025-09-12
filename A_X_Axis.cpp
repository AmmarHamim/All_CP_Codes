#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        vector<int>v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        ll ans=abs(v[1]-v[0])+abs(v[1]-v[2]);
        cout<<ans<<endl;
    }
    return 0;
}