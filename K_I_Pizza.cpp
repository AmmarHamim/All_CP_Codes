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
        string s;cin>>s;

        map<char,int>freq;
        for(auto &u:s)
        {
            freq[u]++;
        }

        int ct = min({freq['M']/1,freq['A']/3, freq['R']/2, freq['G']/1, freq['I']/1, freq['T']/1});

        cout<<ct<<endl;
    }
    return 0;
}