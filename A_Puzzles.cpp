#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int least=abs(v[0]-v[m-1]);
    for(int i=0;i<=m-n;i++)
    {
        ll sum=v[n+i-1]-v[i];
        if(sum<least)least=sum;
    }
    cout<<least<<endl;
    return 0;
}