#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            v[i-1]=i+1;
        }
        else
        {
            v[i+1]=i+1;
        }
    }
    for(auto u:v)
    cout<<u<<" ";
    return 0;
}