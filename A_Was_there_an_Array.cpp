#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n-2);
        for(int i=0;i<n-2;i++)
        {
            cin>>v[i];
        }

        if(n==3)
        {
            yes;continue;
        }
        bool ck=true;
        for(int i=0;i<(n-2)-2;i++)
        {
            if(v[i]==1 && v[i+1]==0 && v[i+2]==1)
            {
                ck = false;
                break;
            }
        }

        if(ck)yes;
        else no;
    }
    return 0;
}