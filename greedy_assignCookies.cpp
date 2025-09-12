#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,m;
    cin>>n>>m;
    vector<int>greed(n),cookie(m);
    for(int i=0;i<n;i++)
    {
        cin>>greed[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>cookie[i];
    }
    sort(greed.begin(),greed.end());
    sort(cookie.begin(),cookie.end());

    int l=0,r=0;
    while(r<m)
    {
        if(l<n && greed[l]<=cookie[r])
        {
            l++;
        }
        r++;
    }
    cout<<l<<endl;
    
    return 0;
}