#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int get_count(int x)
{
    int ct=0;
    while(x>0)
    {
        ct++;
        x/=3;
    }
    return ct;
}
int main()
{
    fast_io;

    int sz=200005;
    vector<int>op(sz);
    vector<int>opsum(sz);
    for(int i=1;i<sz;i++)
    {
        op[i]=get_count(i);
        opsum[i]=opsum[i-1]+op[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
    int l,r;
    cin>>l>>r;

    int ans=opsum[r]-opsum[l-1]+op[l];
    cout<<ans<<endl;
    }

    return 0;
}