#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt2=0,cnt3=0;
        while(n%2==0)
        {
            cnt2++;
            n/=2;
        }
        while(n%3==0)
        {
            cnt3++;
            n/=3;
        }
        if(n!=1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(cnt2<=cnt3)
        {
            cout<<(cnt3-cnt2)+cnt3<<endl;
        }
        else 
        cout<<-1<<endl;
    }

    return 0;
}