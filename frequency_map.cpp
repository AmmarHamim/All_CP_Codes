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
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        freq[v[i]]++;
    }
    for(auto u:freq)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
    return 0;
}