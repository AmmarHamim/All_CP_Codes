#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    vector<int>v;
    ll n=0;
    while(t--)
    {
        ll a,x;
        cin>>a>>x;
        if(a==1)
        {
            v.push_back(x);
            n++;
        }
        else
        {
            cout<<v[n-x]<<endl;
        }
    }
    return 0;
}