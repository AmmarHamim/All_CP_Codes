#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll ct=0;
ll const MOD = 1e9+7;
ll Binary_exp(ll base,ll power)
{
    // ct++;
    if(power==0)return 1;
    ll half_power = Binary_exp(base,power/2);

    if(power%2==0) return half_power*half_power % MOD;
    else return (half_power*half_power) %MOD * base %MOD;
}
int main()
{
    fast_io;

    ll base,power;cin>>base>>power;

    cout<<Binary_exp(base,power)<<endl;
    // cout<<ct<<endl;

    return 0;
}