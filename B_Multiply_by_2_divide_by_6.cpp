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
        ll count=0;
        bool ck=true;
        while(n!=1)
        {
                if(n%6==0)
                {
                    n/=6;
                }
                else if(n%3==0)
                {
                    n*=2;
                }
                else 
                {
                    ck=false;
                    break;
                }
                count++;
        }
        if(ck)
        cout<<count<<endl;
        else 
        cout<<-1<<endl;
        //cout<<count<<endl;
    }

    return 0;
}