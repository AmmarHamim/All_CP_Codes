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
        string a,b;cin>>a>>b;
        a='7'+a;
        b='7'+b;
        ll ct1=0,ct2=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                if(a[i]=='0')ct1++;
                if(b[i]=='0')ct2++;
            }
            if(i%2==1)
            {
                if(b[i]=='0')ct1++;
                if(a[i]=='0')ct2++;
            }
        }
        // cout<<ct1<<" "<<ct2<<endl;

        if(n%2==0)
        {
            if(ct1>=n/2&&ct2>=n/2)yes;
            else no;
        }
        else
        {
            if(ct1>=(n-1)/2 && ct2>=(n+1)/2)yes;
            else no;
        }

    }
    return 0;
}