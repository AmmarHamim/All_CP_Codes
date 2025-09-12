#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;cin>>s;

    int l=0,r=0,len=0,mxlen=0;
    map<char,int>mpp;

    while(r<s.size())
    {
        if(mpp.find(s[r])!=mpp.end())// char is in the map
        {
            // l = max(l,mpp[s[r]]+1);
            if(mpp[s[r]]>=l) // check the bound
            l = mpp[s[r]]+1;
        }
        mpp[s[r]]=r;
        mxlen=max(mxlen,r-l+1);
        r++;
    }
    cout<<mxlen<<endl;
    return 0;
}