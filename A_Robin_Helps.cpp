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
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int s=0;
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=k)
            {
                s+=v[i];
            }
            else if(v[i]==0&&s>0)
            {
                s--;
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}