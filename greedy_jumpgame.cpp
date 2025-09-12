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
    int maxindx=0;
    bool ck=true;
    for( int i=0;i<n;i++)
    {
        if(i>maxindx)
        {
            ck=false;
            break;
        }
        maxindx=max(maxindx,v[i]+i);
    }
    if(ck)cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;
    return 0;
}