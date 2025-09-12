#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool Possible(ll n, ll m, ll k, ll mid) {
    ll full= m/(mid+1);
    ll rem=m%(mid+1);
    long long mPerrow = full*mid+min(rem,mid);
    return n*mPerrow>= k;
}
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;cin>>n>>m>>k;

        // if(k==0)
        // {
        //     cout<<0<<endl;
        //     continue;
        // }

        ll l=1,h=m,ans=m;
        while(l<=h)
        {
            ll mid=(l+h)/2;

            if(Possible(n,m,k,mid))
            {
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
            
        }
        cout<<ans<<endl;
    }
    return 0;
}