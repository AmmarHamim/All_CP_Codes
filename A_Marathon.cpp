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
        vector<int>v(4);
        for(int i=0;i<4;i++)
        {
            cin>>v[i];
        }
        int ct=0;
        for(int i=1;i<4;i++)
        {
            if(v[i]>v[0])ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}