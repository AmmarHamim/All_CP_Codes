#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    auto it= unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    cout<<v.size()<<endl;
    for(auto u:v)
    {
        cout<<u<<" ";
    }
    return 0;
}