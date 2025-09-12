#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    int k;cin>>s>>k;
    int l=0,r=0,maxfreq=0;
    int maxlen=0;
    map<char,int>mpp;
    while(r<s.length())
    {
        mpp[s[r]]++;
        maxfreq=max(maxfreq,mpp[s[r]]);
        while((r-l+1)-maxfreq>k)
        {
            mpp[s[l]]--;
            l++;
        }
        if((r-l+1)-maxfreq<=k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
    cout<<maxlen<<endl;

    return 0;
}