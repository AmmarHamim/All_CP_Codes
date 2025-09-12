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
        int n;
        cin>>n;
        if(n==2)cout<<1<<endl;
        else
        {
        int ans = (n%4)/2+ n/4;
        cout<<ans<<endl;
        }
    }
    return 0;
}