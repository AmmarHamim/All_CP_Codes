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
        vector<int>v(n+1);

        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            mp[v[i]]=i;
        }

        // for(auto u:mp)
        // {
        //     cout<<u.first<<" "<<u.second<<endl;
        // }


        int ans=-1;
       for(auto u:mp)
       {
           for(auto k:mp)
           {
               if(__gcd(u.first,k.first)==1)
               {
                    ans=max(ans,u.second+k.second);
               }
           }
       }

       cout<<ans<<endl;
        
    }
    return 0;
}