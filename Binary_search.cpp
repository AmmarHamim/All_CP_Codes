#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    int x;
    cin>>x;
    sort(v.begin(),v.end());
    int l=0;
    int r=n-1;
    bool found=false;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(x==v[mid])
        {
            found=true;
            break;
        }
        else if(x>v[mid])
        {
            //move right
            l=mid+1;
        }
        else 
        {
            r=mid-1;
        }
    }
    if(found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}