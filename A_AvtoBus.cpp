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
        if(n%2==1||n<4)cout<<-1<<endl;
        else
        {
            ll minbuses = (n%6==0) ? (n/6): (n/6)+1;

            cout<<minbuses<<" "<<n/4<<endl;
        }
    }
    return 0;
}