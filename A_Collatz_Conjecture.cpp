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
        ll k,x;cin>>k>>x;
        
        while(k--)
        {
            if((x-1)%3==0 && ((x-1)/3)%2==1)x=(x-1)/3;
            else x=x*2;
        }

        cout<<x<<endl;
    }
    return 0;
}