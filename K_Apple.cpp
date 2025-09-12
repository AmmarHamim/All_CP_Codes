#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int x,y,n;
    cin>>x>>y>>n;

    int ans=0;
    if(3*x>y)
    {
        ans = y*(n/3) + x*(n%3);
    }
    else
    {
        ans=x*n;
    }
    cout<<ans<<endl;
    return 0;
}