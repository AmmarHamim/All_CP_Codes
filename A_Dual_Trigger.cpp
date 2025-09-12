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
        string s;cin>>s;

        int one=0;
        for(auto u:s)
        {
            if(u=='1')one++;
        }

        bool flg=true;
        if(one%2==1)flg=false;
        else if(one==2)
        {
            // if(one>2)yes;
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]==s[i+1]&&s[i]=='1'&&s[i+1]=='1')
                    {
                        flg=false;break;
                    }
                }
        }

        if(flg)yes;
        else no;
        
    }
    return 0;
}