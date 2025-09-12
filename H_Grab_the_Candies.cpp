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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mit=0;
        int biya=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)mit+=v[i];
            else biya+=v[i];
        }

        if(mit>biya)yes;
        else no;
    }
    return 0;
}