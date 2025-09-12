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
        ll n;cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int m;cin>>m;
       while(m--)
       {
            string s;
            cin>>s;

            map<char,ll>mpc;
            map<ll,char>mpi;

            if(s.length()!=n)
            {
                no;
                continue;
            }

            bool ck=true;
            for(int i=0;i<n;i++)
            {
                if(mpc.count(s[i]) && mpc[s[i]]!=v[i])
                {
                    ck=false;
                    break;
                }

                if(mpi.count(v[i]) && mpi[v[i]]!=s[i])
                {
                    ck=false;
                    break;
                }
                mpc[s[i]]=v[i];
                mpi[v[i]]=s[i];
            }

            if(ck)yes;
            else no;


       }


    }
    return 0;
}