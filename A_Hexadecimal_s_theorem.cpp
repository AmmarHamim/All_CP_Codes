#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    if(n==0)
    cout<<0<<" "<<0<<" "<<0<<endl;
    else
    {
        ll a=0;
        ll b=1;
        while(1)
        {
            ll next=a+b;
            if(next==n)
            {
                cout<<0<<" "<<a<<" "<<b<<endl;
                break;
            }
            a=b;
            b=next;
        }
    }
    return 0;
}