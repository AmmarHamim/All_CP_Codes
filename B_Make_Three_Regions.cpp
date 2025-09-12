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
        char grid[2][n];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>grid[i][j];
            }
        }

        int ans=0;
        for(int i=0;i<2;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(i==0)
                {
                if(grid[i][j]=='.'&&grid[i][j-1]=='.'&&grid[i][j+1]=='.'&&grid[i+1][j]=='.'&&grid[i+1][j-1]=='x'&&grid[i+1][j+1]=='x')
                ans++;
                }
                else
                {
                    if(grid[i][j]=='.'&&grid[i][j-1]=='.'&&grid[i][j+1]=='.'&&grid[i-1][j]=='.'&&grid[i-1][j-1]=='x'&&grid[i-1][j+1]=='x')
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}