#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<ll>v(n);
    map<int,int>frq;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        frq[v[i]]++;
    }
    auto m=min_element(v.begin(),v.end());
    ll ind = distance(v.begin(),m)+1;
    ll ct = frq[*m];
    if(ct>1)
    cout<<"Still Rozdil"<<endl;
    else
    cout<<ind<<endl;
    return 0;
}