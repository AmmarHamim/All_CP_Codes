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
    ll ct=0;
    ll maxi=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<=v[i+1])
        {
            ct++;
            maxi=max(ct,maxi);
        }
        else ct=0;
    }
    cout<<maxi+1<<endl;
    return 0;
}