#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    ll next=0;
    bool found=false;
    for(int i=n+1;i<=m;i++)
    {
        bool prime=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
            if(i==m)
            {
            found=true;
            }
            else
            break;
        }
    }
    if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
}