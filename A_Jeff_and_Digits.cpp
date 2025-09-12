#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<int>v(n);
    ll ct5=0;
    ll ct0=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==5)ct5++;
        else ct0++;
    }
    if(ct0<1)cout<<-1<<endl;
    else if(ct5<9)cout<<0<<endl;
    else
    {
        ct5-=ct5%9;
        for(int i=0;i<ct5;i++)cout<<5;
        for(int i=0;i<ct0;i++)cout<<0;
        
    }
    return 0;
}