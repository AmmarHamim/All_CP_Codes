#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,m;
    cin>>n>>m;

    if(m>n)cout<<-1<<endl;
    else
    {
        int ans=0;
        if(n%2==0)
        {
            ans=n/2;
        }
        else
        {
            ans=(n+1)/2;
        }

        while(ans%m!=0)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}