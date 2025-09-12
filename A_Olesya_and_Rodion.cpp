#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,t;
    cin>>n>>t;
    if(n==1&&t>=10)cout<<-1<<endl;
    else if(n>=2&&t==10)
    {
        for(int i=1;i<n;i++)
        {
            cout<<1;
        }
        cout<<0;
    }
    else
    {
    for(int i=1;i<=n;i++)
    {
        cout<<t;
    }
    }
    return 0;
}