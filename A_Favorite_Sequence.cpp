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
        if(n==1)
        {
            cout<<v[0]<<endl;
            continue;
        }
        int l=0;int r=n-1;
        while(l<=r)
        {
            if(l!=r)
            cout<<v[l]<<" "<<v[r]<<" ";
            l++;r--;
            if(l==r)cout<<v[l];
        }
     cout<<endl;   
    }
    return 0;
}