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
        ll n,m,l,r;cin>>n>>m>>l>>r;

        // ll l1=l;
        // ll r1=l+m;
        // cout<<l1<<" "<<r1<<endl;

        ll xx=m;
        if(xx>-l)xx=-l;
        ll yy=m-xx;
        cout<<-xx<<" "<<yy<<endl;
    }
    return 0;
}