#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k;
        cin>>n>>k;
        ll op=0;
        if(k==1)op=n;
        else
        {
            while(n>0)
            {
                op+=n%k;
                n/=k;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}