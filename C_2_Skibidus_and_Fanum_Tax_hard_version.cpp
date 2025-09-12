#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll INM = 1e18;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tt;
    cin>>tt;

    while (tt--)
    {
        int n,m;
        cin>>n>>m;

        vector<ll>v1(n);
        for (int i=0;i<n;i++) 
        {
            cin>>v1[i];
        }

        vector<ll>v2(m);
        for (int i=0;i<m;i++) 
        {
            cin>>v2[i];
        }
        sort(v2.begin(),v2.end());
        bool ct = true;
        ll premx = -INM;

        for (int i=0;i<n;i++) 
        {
            ll vall = v1[i];
            ll cand = (vall>=premx) ? vall : INM;

            ll targ = premx+vall;
            auto it = lower_bound(v2.begin(), v2.end(),targ);

            ll cf = INM;
            if (it != v2.end()) 
            {
                cf = *it-vall;
            }
            ll min_cand = min(cand,cf);
            if (min_cand==INM)
            {
                ct=false;
                break;
            }

            premx = min_cand;
        }

       if(ct)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}