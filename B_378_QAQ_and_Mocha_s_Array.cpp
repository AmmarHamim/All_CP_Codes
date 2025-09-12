#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        sort(v.begin(),v.end());

        ll x=v[0];
        bool ck=true;

        vector<ll>b;
        for(int i=1;i<n;i++)
        {
            if(v[i]%x!=0)
            {
                ck=false;
                b.push_back(v[i]);
            }
        }

        if(ck)yes;
        else
        {
            sort(b.begin(),b.end());
            ll xb=b[0];
            bool ck2=true;
            for(int i=1;i<b.size();i++)
            {
                if(b[i]%xb!=0)
                {
                    ck2=false;
                    break;
                }
            }
            if(ck2)yes;
            else no;
        }
        
    }
    return 0;
}