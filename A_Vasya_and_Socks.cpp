#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    ll days=n;
    while(n>=m)
    {
        days+=n/m;
        n=n%m+n/m;
    }
    cout<<days<<endl;
    return 0;
}