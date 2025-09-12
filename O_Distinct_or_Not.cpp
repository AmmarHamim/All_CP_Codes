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
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   // sort(v.begin(),v.end());
    set<int>st(v.begin(),v.end());
    //cout<<st.size()<<endl;
    if(st.size()==n)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}