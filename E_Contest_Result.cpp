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

    
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    int sum=0;
    for(int i=0;i<m;i++)
    {
        sum+= v[b[i]-1];
    }
    cout<<sum<<endl;
    return 0;
}