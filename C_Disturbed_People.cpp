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
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0&&v[i-1]==1&&v[i+1]==1)
        {
            k++;
            i+=2;
        }
    }
    cout<<k<<endl;
    return 0;
}