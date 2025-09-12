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

    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;

        int sum=0;

        for(int i=0;i<n;i++)
        {
            int d;
            cin>>d;

            if(d>0)
            sum+=d;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}