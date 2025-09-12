#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;//O(1)
    vector<int>v(n);
    for(int i=0;i<n;i++)//O(N)-->10^7
    {
        cin>>v[i];
    }
    for(auto u:v)//O(N)
    {
        cout<<u<<" ";
    }
    return 0;
}