#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<int>v;
    if(n%2==0)
    {
    ll sz=n/2;
    cout<<sz<<endl;
    for(int i=0;i<sz;i++)
    {
        cout<<2<<" ";
    }
    }
    else 
    {
        ll s=(n-1)/2;
        cout<<s<<endl;
        for(int i=0;i<s-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}