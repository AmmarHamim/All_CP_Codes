#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    ll s=min(m,n);
    if(s%2==0)cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
    return 0;
}