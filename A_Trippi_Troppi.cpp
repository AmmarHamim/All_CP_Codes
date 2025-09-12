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
       string a,b,c;cin>>a>>b>>c;
       string ans;
       ans+=a[0];
       ans+=b[0];
       ans+=c[0];
       cout<<ans<<endl;
    }
    return 0;
}