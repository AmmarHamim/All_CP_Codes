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
        set<ll>st1,st2,st3;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            st1.insert(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            st2.insert(x);
        }

        for(auto u:st1)
        {
            for(auto v:st2)
            {
                st3.insert(u+v);
            }
        }

        if(st3.size()>=3)yes;
        else no;


    }
    return 0;
}