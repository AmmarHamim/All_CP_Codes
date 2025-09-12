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
    ll initial=1;
    ll time=0;
    for(int i=0;i<m;i++)
    {
        ll desti=v[i];
        if(desti>=initial)
        {
            time+= desti-initial;
        }
        else
        {
            time+=n-(initial-desti);
        }
        initial=desti;
    }
    cout<<time<<endl;
    return 0;
}