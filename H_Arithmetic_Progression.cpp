#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll a,b,d;
    cin>>a>>b>>d;
    for(int i=a;i<=b;i+=d)
    cout<<i<<" ";
    return 0;
}