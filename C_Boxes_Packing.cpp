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
    map<int,int>freq;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        freq[v[i]]++;
        ans=max(ans,freq[v[i]]);
    }
    cout<<ans<<endl;
    return 0;
}