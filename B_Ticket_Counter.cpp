#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,a;
    cin>>n>>a;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll time=0;
    for(auto u:v)
    {
        if(u>=time)time=u+a;
        else time=time+a;
        cout<<time<<endl;
    }
    return 0;
}