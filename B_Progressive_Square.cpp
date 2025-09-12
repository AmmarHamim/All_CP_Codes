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
        int n,c,d;
        cin>>n>>c>>d;

        vector<ll>v(n*n);
        for(int i=0;i<n*n;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int arr[n][n];
        arr[0][0]=v[0];
        for(int i=1;i<n;i++)
        {
            arr[0][i]=arr[0][i-1]+d;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=arr[i-1][j]+c;
            }
        }

        vector<ll>final;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                final.push_back(arr[i][j]);
                // cout<<arr[i][j]<<" ";
            }
            // cout<<endl;
        }

        sort(final.begin(),final.end());
        
        // for(auto u:final)
        // {
        //     cout<<u<<" ";
        // }
        
        if(final==v)yes;
        else no;
    }
    return 0;
}