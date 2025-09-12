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
        int n;string s;
        cin>>n>>s;

        bool ck=false;

        if(s.size()<2)
        {
            no;
            continue;
        }
        else 
        {
            if(s[0]!=s[n-1])
            {
                ck=true;
            }
            else ck=false;
        }

        if(ck)yes;
        else no;
    }
    return 0;
}