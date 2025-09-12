#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,tar;
    cin>>n>>tar;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=n-1;

    while(l<n)
    {
        if(v[l]+v[r]==tar)
        {
            cout<<l<<" "<<r<<endl;
            break;
        }
        else r++;
        // l++;
    }
    return 0;
}