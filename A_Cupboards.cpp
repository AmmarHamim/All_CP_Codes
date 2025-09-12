#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    ll lefto=0,leftc=0,righto=0,rightc=0;
    for(auto u:v)
    {
        if(u.first==1)lefto++;
        else leftc++;
        if(u.second==1)righto++;
        else rightc++;
    }
    ll left_changes=min(lefto,leftc);
    ll right_changes=min(righto,rightc);
    cout<<left_changes+right_changes<<endl;
    return 0;
}