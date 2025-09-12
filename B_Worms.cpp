#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;
    vector<int>v(n);
    vector<ll>presum(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        presum[i]=v[i-1]+presum[i-1];
    }
    
    int k;cin>>k;
    vector<int>v2(k);
    for(int i=0;i<k;i++)
    {
        cin>>v2[i];
    }

    // for(int i=0;i<=n;i++)
    // {
    //     cout<<presum[i]<<" ";
    // }

    for(int i=0;i<k;i++)
    {
        int indx = lower_bound(presum.begin(),presum.end(),v2[i])-presum.begin();
        cout<<indx<<endl;
    }


    return 0;
}