#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    ll ct=0;
    for(int a=0;a<=n;a++)
    {
        for(int b=0;b<=m;b++)
        {
            if((a*a+b==n)&&(a+b*b==m))ct++;
        }
    }
    cout<<ct<<endl;
    return 0;
}