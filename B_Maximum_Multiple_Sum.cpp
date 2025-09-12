#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    // ll x=2;
    ll sum_max=0;
    while(t--)
    {
        ll n;
        cin>>n;
        int x=2;
        //ll sum=0;
        ll max_sum=0;
        for(int i=2;i<=n;i++)
        {
            ll sum=0;
            for(int j=1;j<=n;j++)
            {
                if(j*i<=n)
                {
                    sum+=j*i;
                    if(max_sum<sum)
                    {
                        max_sum=sum;
                        x=i;
                    }
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}