#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int a,b,t;
    cin>>a>>b>>t;
    if(a>t)cout<<0<<endl;
    else
    {
        cout<<(t/a)*b<<endl;
    }
    return 0;
}