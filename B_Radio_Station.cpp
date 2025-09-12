#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    map<string,string>mp;
    while(n--)
    {
        string name,ip;
        cin>>name>>ip;
        ip+=';';
        mp[ip]=name;
    }
    while(m--)
    {
        string nameq,ipq;
        cin>>nameq>>ipq;
        cout<<nameq<<' '<<ipq<<' '<<"#"<<mp[ipq]<<endl;
    }
    return 0;
}