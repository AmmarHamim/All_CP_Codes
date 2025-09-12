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

        int zero=0;
        for(auto u:s)
        {
            if(u=='0')zero++;
        }
        int one=n-zero;

        int m1=0;
        for(int i=0;i<zero;i++)
        {
            if(s[i]=='1')m1++;
        }

        int m0=0;
        for(int i=zero;i<n;i++)
        {
            if(s[i]=='0')m0++;
        }

        // if(m0==0 and m1==0)cout<<0<<endl;
        // else if((m0==1 and m1==0)||(m0==0 and m1==1))cout<<1<<endl;
        // else if(m0==1 and m1==1)cout<<1<<endl;
        // else cout<<2<<endl;

        cout<<m0<<endl;
    }
    return 0;
}