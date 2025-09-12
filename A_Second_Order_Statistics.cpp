#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()<2)cout<<"NO"<<endl;
    else
    {
        cout<< *(++s.begin())<<endl;
    }
    return 0;
}