#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);


bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first)return true;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    else return false;
}
int main()
{
    fast_io;

    ll n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    ll ct=0;
    for(auto u:v)
    {
        if(u==v[k-1])ct++;
    }
    cout<<ct<<endl;
    return 0;
}