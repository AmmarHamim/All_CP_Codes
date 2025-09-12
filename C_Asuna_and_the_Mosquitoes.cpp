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
        ll s=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            s+=v[i];
        }
        ll need=0;
        if(n%2==1&&s%2==0)need=n-1;
    }
    return 0;
}