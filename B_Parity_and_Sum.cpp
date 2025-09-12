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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<ll>odd;
        vector<ll>even;
        for(auto u:v)
        {
            if(u%2!=0)odd.push_back(u);
            else even.push_back(u);
        }
        if(odd.size()==0||even.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        ll maxele=odd.back();
        ll ans=even.size();

        for(auto u:even)
        {
            if(u>maxele)
            {
                ans++;
                break;
            }
            maxele+=u;
        }
        cout<<ans<<endl;
    }

    return 0;
}