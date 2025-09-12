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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int cost=0;
        if(2*x<=y) // counting one by one is more logical
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='.')
                {
                    cost+=x;
                }
            }
        }        
        }
        else// counting by pair is more logical
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(arr[i][j]=='.')
                    {
                        if(j+1<m and arr[i][j+1]=='.')
                        {
                            cost+=y;
                            j++;
                            // continue;
                        }
                        else 
                        {
                            cost+=x;
                        }
                    }
                }
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}