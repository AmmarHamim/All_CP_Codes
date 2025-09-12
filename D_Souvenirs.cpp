#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    vector<ll>v1(n),v2(m);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    ll total=0;
    ll index=0;
    for(int i=0;i<m;i++)
    {
        while(index<n&&v1[index]<v2[i])
        {
            index++;
        }
        if(index==n)
        {
            return cout<<-1<<"\n",0;
        }
        total+=v1[index];
        index++;
    }
    cout<<total<<endl;
    return 0;
}