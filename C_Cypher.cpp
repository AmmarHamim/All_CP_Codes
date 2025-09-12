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
        for(int i=0;i<n;i++)
        {
            int k;
            string s;
            cin>>k>>s;
            for(auto mv:s)
            {
                if(mv=='U')v[i]=(v[i]==0 ? 9 : v[i]-1);
                else v[i]=(v[i]==9 ? 0 : v[i]+1);
            }
        }

        for(auto u:v)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }
    return 0;
}