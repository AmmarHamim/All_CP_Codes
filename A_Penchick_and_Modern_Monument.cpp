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
        int n;cin>>n;
        map<int,int>mp;
        int maxfreq=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x]++;

            maxfreq=max(maxfreq,mp[x]);
        }
        cout<<n-maxfreq<<endl;

    }
    return 0;
}