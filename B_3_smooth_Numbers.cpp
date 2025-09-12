#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;

    while(n%2==0)n/=2;

    while(n%3==0)n/=3;

    if(n==1)yes;
    else no;
    return 0;
}