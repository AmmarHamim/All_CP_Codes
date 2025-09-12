#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    auto maxit = max_element(v.begin(),v.end());
    if(v[0]>=*maxit&&mp[v[0]]==1)cout<<0<<endl;
    //else if((v[0])==*maxit&&mp[v[0]]>1)cout<<(*maxit+1)-v[0]<<endl;
    //else if(v[0]<*maxit)cout<<(*maxit+1)-v[0];
    else cout<<(*maxit+1)-v[0]<<endl;
    return 0;
}