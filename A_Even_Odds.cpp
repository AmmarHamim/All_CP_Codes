#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,k;
    cin>>n>>k;
    
    ll odd= (n+1)/2;
    if(k<=odd)
    {
        cout<<k*2-1<<endl;
    }
    else
    {
        k=k-odd;
        cout<<k*2<<endl;
    }
    return 0;
}