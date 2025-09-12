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
        
        bool ck=true;
        for(int i=0;i<n-2;i++)
        {
            int reduced=v[i];
            v[i]-=reduced;
            v[i+1]-=2*reduced;
            v[i+2]-=reduced;

            if(v[i+1]<0||v[i+2]<0)
            {
                ck=false;break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]!=0)
            {
                ck=false;
                break;
            }
        }
        if(ck)yes;
        else no;
    }
    return 0;
}