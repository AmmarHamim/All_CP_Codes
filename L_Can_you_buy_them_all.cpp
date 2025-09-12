#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,x;
    cin>>n>>x;
    vector<int>v(n);
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(i%2==0)
        {
            sum+=v[i]-1;
        }
        else sum+=v[i];
    }
    if(sum<=x)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}