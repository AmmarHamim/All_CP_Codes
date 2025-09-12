#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll k;cin>>k;
    ll cur=0;
    ll ans=0;
    for(int i=1;i<=1000000;i++)
    {
        cur=(cur*10+7)%k;
        cout<<cur<<endl;
        if(cur%k==0)
        {
            ans=i;
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}