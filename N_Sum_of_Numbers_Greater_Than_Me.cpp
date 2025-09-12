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
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>vs=v;
    sort(vs.begin(),vs.end());

    vector<ll>prsum(n+1,0);
    for(int i=1;i<=n;i++)
    {
        prsum[i]=prsum[i-1]+vs[i-1];
    }

    vector<ll>ans(n);
    for(int i=0;i<n;i++)
    {
        int indx = upper_bound(vs.begin(),vs.end(),v[i])-vs.begin();

        ans[i] = prsum[n]-prsum[indx];
    }

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}