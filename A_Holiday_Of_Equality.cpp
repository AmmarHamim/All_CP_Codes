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
    
    sort(v.rbegin(),v.rend());
    int m=v[0];
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]<m)ans+= m-v[i];
    }
    cout<<ans<<endl;
    return 0;
}