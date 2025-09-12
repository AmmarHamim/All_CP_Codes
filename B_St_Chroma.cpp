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
        int n,x;cin>>n>>x;
        vector<int>v;

        for(int i=0;i<x;i++)
        {
            v.push_back(i);
        }
        for(int i=n-1;i>x;i--)
        {
            v.push_back(i);
        }
        if(x<n)v.push_back(x);

        for(auto u:v)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }
    return 0;
}