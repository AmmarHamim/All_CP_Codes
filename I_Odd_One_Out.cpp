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
        vector<int>v(3);
        cin>>v[0]>>v[1]>>v[2];

        sort(v.begin(),v.end());

        if(v[0]==v[1])
        {
            cout<<v[2]<<endl;
        }
        else if(v[1]==v[2])cout<<v[0]<<endl;
        else cout<<v[1]<<endl;
    }
    return 0;
}