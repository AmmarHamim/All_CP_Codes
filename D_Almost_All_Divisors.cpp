#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans= (ll)v[0]*v[n-1];
        // cout<<ans<<endl;

        vector<int>ck;
         for(ll i=2;i*i<=ans;i++)
         {
             if(ans%i==0)
             {
                ck.push_back(i);
                if(i!=ans/i)
                ck.push_back(ans/i);
             }
         }

         sort(ck.begin(),ck.end());
         if(ck==v)cout<<ans<<endl;
         else cout<<-1<<endl;
         
        //  for(auto u:ck)
        //  {
        //      cout<<u<<" ";
        //  }

    }
    return 0;
}