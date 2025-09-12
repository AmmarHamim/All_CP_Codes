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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int l=0,r=0,mxlen=0;
    map<int,int>mpp;
    while(r<n)
    {
        mpp[v[r]]++;

        if(mpp.size()>2)
        {
            mpp[v[l]]--;
            if(mpp[v[l]]==0)mpp.erase(v[l]);
            l++;
        }
        if(mpp.size()<=2)
        mxlen=max(mxlen,r-l+1);
        r++;
    }
    cout<<mxlen<<endl;
    return 0;
}