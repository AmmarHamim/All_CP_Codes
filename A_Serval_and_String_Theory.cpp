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
        string s;cin>>s;
        set<char>ss(s.begin(),s.end());
        bool flg=true;
        char ch=s[0];
        for(auto u:s)
        {
            if(u!=ch)
            {
                flg=false;
                break;
            }
        }
        if(flg)no;
        if(ss.size()<2)no;
        else yes;
        
    }
    return 0;
}