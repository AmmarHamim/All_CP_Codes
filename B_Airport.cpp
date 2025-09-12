#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    //min
    ll mins=0;
    ll ct=0;
    ll j=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;)
    {
        ll x=v[j];
        while(x>0&&i<n)
        {
            mins+=x;
            x--;
            i++;
        }
        j++;
    }
    //max
    ll maxs=0;
    for(int i=0;i<n;i++)
    {
      sort(v.rbegin(),v.rend());
      maxs+=v[0];
      v[0]--;  
    }
     cout<<maxs<<" "<<mins<<endl;;
    return 0;
}