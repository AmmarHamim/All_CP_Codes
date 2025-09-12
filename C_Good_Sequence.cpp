#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    map<int,int>count;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        count[a]++;
    }
    ll remove=0;
    for(auto u:count)
    {
        if(u.second>=u.first)
        {
            remove+=(u.second-u.first);
        }
        else remove+=u.second;
    }
    cout<<remove<<endl;
    return 0;
}