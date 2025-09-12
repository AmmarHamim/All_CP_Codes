#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tt;
    cin>>tt;
    while(tt--)
    {
        ll n,m;
        cin>>n>>m;

        vector<vector<ll>> a(n,vector<ll>(m));
        vector<ll>v1(n),v2(n);

        for (int i=0;i<n;i++)
        {
            v1[i]=0;
            v2[i]=0;
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                v1[i]+=a[i][j];
                v2[i]+=a[i][j]*(j + 1);
            }
        }
        vector<pair<ll,int>>s(n);
        for (int i=0;i<n;i++)
        {
            s[i]={v1[i],i};
        }
        sort(s.rbegin(),s.rend());

        ll sum=0,ps=0;
        for (int i=0;i<n;i++)
        {
            int indx = s[i].second;
            sum+=v2[indx];

            ll haha=m*(n-i)+1;
            ps+=v1[indx]*haha;
        }

        ll ans=ps-sum;
        cout<<ans<<endl;
    }
}