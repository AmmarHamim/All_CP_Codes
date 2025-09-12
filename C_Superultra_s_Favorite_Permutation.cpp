#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n<=4)
        {
            cout<<-1<<endl;
            continue;
        }

        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0 && i!=4)v.push_back(i);
        }
        v.push_back(4);
        v.push_back(5);
        for(int i=1;i<=n;i++)
        {
            if(i%2==1 && i!=5)v.push_back(i);
        }

        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}