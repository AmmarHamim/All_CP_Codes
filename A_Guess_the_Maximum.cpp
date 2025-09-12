#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int k=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            int maxele=max(v[i],v[i+1]);
            if(maxele<k)
            {
                k=maxele;
            }

        }
        cout<<k-1<<endl;
    }
    return 0;
}