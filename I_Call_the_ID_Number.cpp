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
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<bool>called(n+1,false);
    for(int i=1;i<=n;i++)
    {
        if(called[i])continue;
        else called[v[i]]=true;
    }

    vector<int>uncalled;

    for(int i=1;i<=n;i++)
    {
        if(!called[i])
        uncalled.push_back(i);
    }

    cout<<uncalled.size()<<endl;
    for(auto u:uncalled)
    {
        cout<<u<<" ";
    }
    
    return 0;
}