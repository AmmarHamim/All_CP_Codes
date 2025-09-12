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
        int n,x;
        cin>>n>>x;
        int ans=0;
        for(int a=1;a<=n&&a<=x;a++)
        {
            for(int b=1;a*b<=n && a+b<=x;b++)
            {
                ans+=min((x-a-b),(n-(a*b))/(a+b));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}