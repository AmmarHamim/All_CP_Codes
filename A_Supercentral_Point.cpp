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
    ll ct=0;
    for(int i=0;i<n;i++)
    {
         bool rightn=false,leftn=false,upn=false,lown=false;
        for(int j=0;j<n;j++)
        {
            if(i==j)continue;
            if((v[i].second==v[j].second)&&(v[i].first>v[j].first))leftn=true;
            if((v[i].second==v[j].second)&&(v[i].first<v[j].first))rightn=true;
            if((v[i].first==v[j].first)&&(v[i].second<v[j].second))lown=true;
            if((v[i].first==v[j].first)&&(v[i].second>v[j].second))upn=true;
        }
        if(rightn&&leftn&&upn&&lown)ct++;
    }
    cout<<ct<<endl;
    return 0;
}