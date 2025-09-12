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
        int n;string s;cin>>n>>s;
        int ones=0,zero=0;
        for(auto u:s)
        {
            if(u=='1')ones++;
            else zero++;
        }

        int result = n*ones+zero-ones;
        cout<<result<<endl;
    }
    return 0;
}