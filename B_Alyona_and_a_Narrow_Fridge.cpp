#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool Possible(vector<int>&v,int k,int ht)
{
    vector<int>vec(v.begin(),v.begin()+k);
    sort(vec.rbegin(),vec.rend());
    ll s=0;
    for(int i=0;i<k;i+=2)
    {
        s+=vec[i];
    }
    return s<=ht;
}
int main()
{
    fast_io;

    ll n,ht;cin>>n>>ht;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    // sort(v.rbegin(),v.rend());
    int l=0,h=n;
    int ans=0;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(Possible(v,mid,ht))
        {
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}