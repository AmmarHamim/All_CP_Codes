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
        string s,ts;
        cin>>s>>ts;

        int x=s.size();
        int y=ts.size();

        int i=0,j=0;
        while(i<x&&j<y)
        {
            if(s[i]=='?'||s[i]==ts[j])
            {
                s[i]=ts[j];
                i++;j++;
            }
            else i++;
        }
        bool ck=true;
        if(j!=y)ck=false;
        while(i<x)
        {
            if(s[i]=='?')s[i]='h';
            i++;
        }
        if(ck)
        {
            yes;
            cout<<s<<endl;
        }
        else no;
    }
    return 0;
}