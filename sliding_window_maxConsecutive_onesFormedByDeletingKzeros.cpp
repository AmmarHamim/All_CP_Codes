#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int l=0,r=0,one=0,zero=0,mxone=0;

    while(r<n)
    {
        if(v[r]==1)one++;
        else zero++;

        if(zero>k)
        {
            if(v[l]==0)zero--;
            else one--;
            l++;
        }
        if(zero<=k)
        {
            mxone=max(mxone,one);
            // r++;
        }
        r++;
    }
    cout<<mxone<<endl;

    return 0;
}