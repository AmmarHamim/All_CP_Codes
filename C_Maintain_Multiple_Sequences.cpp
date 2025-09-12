#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,q;cin>>n>>q;

    vector<int>startidx(n);
    vector<int>array; 

    int i=0;
    while(i<n)
    {
        int l;cin>>l;

        startidx[i]=array.size();
        for(int j=0;j<l;j++)
        {
            int x;cin>>x;
            array.push_back(x);
        }
        i++;
    }
    while(q--)
    {
        int a,b;cin>>a>>b;
        a--;
        b--;
        int ans= array[startidx[a]+b] ;
        cout<<ans<<endl;
    }
    return 0;
}