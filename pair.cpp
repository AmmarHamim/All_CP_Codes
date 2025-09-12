#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    // pair<string,vector<int>>p;
    // // p={44,45};
    // // p.first--;
    // // cout<<p.first<<" "<<p.second<<endl;
    
    // p={"hamim",{2,3,4}};
    // cout<<p.first<<endl;
    // for(auto u:p.second)
    // {
    //     cout<<u<<" ";
    // }

    vector<pair<int,int>>v;
    v.push_back({3,2});
    v.push_back({3,2});
    
    if(v[0]==v[1])
    cout<<"yes"<<endl;

    return 0;
}