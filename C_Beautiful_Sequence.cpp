#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 998244353;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tt;cin>>tt;
    while (tt--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll prod_sum=0;
        ll curr_sum=0;
        ll ct1=0;
        ll k=0;
        for(auto u:v)
        {
            if (u==1)
            {
                curr_sum=(curr_sum+1)%MOD;
                ct1++;
            }
            else if (u==2)
            {
                curr_sum=(curr_sum*2)%MOD;
            }
            else if (u==3)
            {
                prod_sum=(prod_sum+curr_sum)%MOD;
                k=(k+ct1)%MOD;
            }
        }
        ll ans=(prod_sum-k+MOD)%MOD;
        cout<<ans<<endl;
    }
    return 0;
}