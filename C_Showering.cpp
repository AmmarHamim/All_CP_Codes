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
        int n,s,m;
        cin>>n>>s>>m;
        int prev=0;
        bool ck=false;
        while(n--)
        {
            int l,r;
            cin>>l>>r;

            if(l-prev>=s)ck=true;
            prev=r;   
        }

        if(m-prev>=s)ck=true;
        if(ck)yes;
        else no;
    }
    return 0;
}