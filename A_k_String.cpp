#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto u:s)
    {
        mp[u]++;
    }
    string ans;
    for(auto u:mp)
    {
       if(u.second%k!=0)
       {
        return cout<<-1<<endl,0;
       }
       else
       {
        ans+=string(u.second/k,u.first);
       }
    }
    for(int i=0;i<k;i++)cout<<ans;
    return 0;
}