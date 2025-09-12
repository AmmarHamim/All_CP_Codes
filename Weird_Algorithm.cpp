#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;cin>>n;
    vector<ll>v;

    v.push_back(n);
    while(n!=1)
    {
        if(n%2==0)
        {
            v.push_back(n/2);
            n/=2;
        }
        else 
        {
            n=n*3+1;
            v.push_back(n);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}