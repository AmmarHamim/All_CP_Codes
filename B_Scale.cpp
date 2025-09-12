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
        int n,k;
        cin>>n>>k;
        int grid[n][n];


        for(int i=0;i<n;i++)
        {
            string row;
            cin>>row;
            for(int j=0;j<n;j++)
            {
                grid[i][j]=row[j]-'0';
                // cin>>grid[i][j];
            }
        }

        int newn=n/k;
        int newgrid[newn][newn];
        for(int i=0;i<newn;i++)
        {
            for(int j=0;j<newn;j++)
            {
                newgrid[i][j]=grid[i*k][j*k];
            }
        }

        for(int i=0;i<newn;i++)
        {
            for(int j=0;j<newn;j++)
            {
               cout<<newgrid[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}