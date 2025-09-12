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
        char arr[n][4];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<4;j++)
            {
                cin>>arr[i][j];
            }
        }

        vector<int>v;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[i][j]=='#')
                {
                    v.push_back(j+1);
                }
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