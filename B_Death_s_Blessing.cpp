#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>health(n);
        vector<ll>spell(n);
        ll timeh=0;
        for(int i=0;i<n;i++)
        {
            cin>>health[i];
            timeh+=health[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>spell[i];
        }
        sort(spell.begin(),spell.end());
        ll timespl=0;
        for(int i=0;i<n-1;i++)//excluding the maximum last spell
        {
            timespl+=spell[i];
        }
        ll ans=timeh+timespl;
        cout<<ans<<endl;
    }
    return 0;
}