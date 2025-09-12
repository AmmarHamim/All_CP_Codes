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
    int k;cin>>k;

    int l=0,r=0,mxlen=0;
    map<char,int>mpp;
    while(r<s.size())
    {
        mpp[s[r]]++;
        if(mpp.size()>k)
        {
            mpp[s[l]]--;
            if(mpp[s[l]]==0)mpp.erase(s[l]);
            l++;
        }
        if(mpp.size()<=k)
        {
            mxlen=max(mxlen,r-l+1);
        }
        r++;
    }
    cout<<mxlen<<endl;
    return 0;
}