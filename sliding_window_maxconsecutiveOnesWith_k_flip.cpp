#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int l=0,r=0,len=0,mxlen=0;
    int zero=0;

    while(r<n)
    {
        if(v[r]==0)zero++;
        if(zero<=k)mxlen=max(mxlen,r-l+1);
        if(zero>k)
        {
            if(v[l]==0)zero--;
            l++;
        }
        //  if(zero<=k)mxlen=max(mxlen,r-l+1);
        r++;
    }
    cout<<mxlen<<endl;

    return 0;
}