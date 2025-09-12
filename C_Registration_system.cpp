#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(mp[s]==0)cout<<"OK\n";
        else
        {
            cout<<s<<mp[s]<<endl;
        }
        mp[s]++;
    }
    return 0;
}