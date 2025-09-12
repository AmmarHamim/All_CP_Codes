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
        ll k,x;cin>>k>>x;

        ll st=1ll<<k;
        ll tot=1ll << (k+1);
        if(st==x)
        {
            cout<<0<<"\n\n";
            continue;
        }
        vector<int>ans;
        ll cur=x;
        while(cur!=st)
        {
            if(cur<st)
            {
                cur=cur*2;
                ans.push_back(1);
            }
            else
            {
                cur=cur*2 -tot;
                ans.push_back(2);
            }
        }

        reverse(ans.begin(),ans.end());
        cout<<ans.size()<<endl;

        for(auto u:ans)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }
    return 0;
}