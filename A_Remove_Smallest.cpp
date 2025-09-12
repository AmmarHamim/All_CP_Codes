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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            yes;
            continue;
        }
        else
        {
         sort(v.begin(),v.end());
        int d=0;
        int m=0;
        for(int i=1;i<n;i++)
        {
            d=abs(v[i]-v[i-1]);
            if(d>m)
            {
                m=d;
            }
        }
        if(m>1)no;
        else yes;
        }
    }
    return 0;
}