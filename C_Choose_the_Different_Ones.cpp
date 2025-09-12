#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;cin>>n>>m>>k;

        vector<int>a(n);
        vector<int>b(m);

        unordered_set<int>set_a,set_b;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=k)set_a.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            if(b[i]<=k)set_b.insert(b[i]);
        }

        vector<int>unia,unib,ab;
        
        for(auto u:set_a)
        {
            if(set_b.find(u)==set_b.end())unia.push_back(u);
            else ab.push_back(u);
        }
        for(auto u:set_b)
        {
            if(set_a.find(u)==set_a.end())unib.push_back(u);
        }
        if(unia.size()>k/2)no;
        else if(unib.size()>k/2)no;
        else if(unia.size()+unib.size()+ab.size()<k)no;
        else yes;
    }
    return 0;
}