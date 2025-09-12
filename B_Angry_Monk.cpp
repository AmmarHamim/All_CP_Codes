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
        ll n,k;
        cin>>n>>k;
        vector<int>v(k);
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<k-1;i++)
        {
            if(v[i]==1)
            {
                ans+=1;
            }
            else 
            {
                ans+=v[i]*2-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}