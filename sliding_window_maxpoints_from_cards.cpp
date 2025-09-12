#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int lsum=0,mxsum=0;
    for(int i=0;i<k;i++)lsum+=v[i];
    mxsum=lsum;

    int l=k-1;//pointer for the left end of the window
    for(int r=n-1;r>=n-k;r--)
    {
        lsum -=v[l];
        l--;
        lsum+=v[r];

        mxsum=max(mxsum,lsum);
    }

    cout<<mxsum<<endl;

    return 0;
}