#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n%2==1)
    {
        cout<<arr[n/2]<<endl;
    }
    else
    {
        double ans = (arr[n/2]+arr[n/2-1])/2.0;
        cout<<ans<<endl;
    }

    return 0;
}