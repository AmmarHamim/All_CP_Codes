#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    set<int>st;
    ll p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }
    ll p2;
    cin>>p2;
    for(int i=0;i<p2;i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }
    if(st.size()==n)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}