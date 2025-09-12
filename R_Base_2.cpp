#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    vector<int>v(64);
    for(int i=0;i<64;i++)
    {
        cin>>v[i];
    }
    unsigned long long sum=0;
    // int p=0;
    for(int i=0;i<64;i++)
    {
        if(v[i]!=0)
        {
            sum+=(1ll<<i);
            // p++;
        }
        // p++;
    }
    cout<<sum<<endl;
    
    return 0;
}