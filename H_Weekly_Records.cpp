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
    while(n--)
    {
        vector<int>v(7);
        for(int i=0;i<7;i++)
        {
            cin>>v[i];
        }
        int sum=0;
        for(int i=0;i<7;i++)
        {
            sum+=v[i];
        }
        cout<<sum<<" ";
    }
    return 0;
}