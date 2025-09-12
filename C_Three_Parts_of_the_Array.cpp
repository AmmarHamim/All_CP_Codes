#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    ll sum1=0,sum3=0;
    ll ans=0;
    int l=0,r=n-1;
    while(l<=r)
    {
        if(sum1<sum3)
        {
            sum1+=v[l++];
        }
        else sum3+=v[r--];

        if(sum1==sum3)ans=sum1;
    }
    cout<<ans<<endl;
    return 0;
}