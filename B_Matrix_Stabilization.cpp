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
        int n,m;
        cin>>n>>m;
        vector<vector<ll>>v(n,vector<ll>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll val=v[i][j];
                ll mx=LLONG_MIN;

                if(i>0)mx=max(mx,v[i-1][j]);
                if(i<n-1)mx=max(mx,v[i+1][j]);
                if(j>0)mx=max(mx,v[i][j-1]);
                if(j<m-1)mx=max(mx,v[i][j+1]);


                if(val>mx)
                {
                    v[i][j]=mx;
                }
                
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}