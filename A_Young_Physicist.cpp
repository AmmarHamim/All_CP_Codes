#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        ll sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=arr[j][i];
        }
        if(sum!=0)return cout<<"NO\n",0;
    }
    cout<<"YES\n";

    return 0;
}