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
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>grid[i][j];
            }
        }

        vector<int>ans((2*n)+1,0);

        // int ct=2;
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
                int indx=i+j+2;
                if(!ans[indx])ans[indx]=grid[i][j];
          }
        }

        vector<bool>seen(2*n+1,false);

        int left=0;
        for(int i=2;i<=2*n;i++)
        {
            if(ans[i])seen[ans[i]]=true;
        }

        for(int i=1;i<=2*n;i++)
        {
            if(!seen[i])
            {
                left=i;
                break;
            }
        }

        cout<<left<<" ";

        for(int i=2;i<=2*n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;



    //    for(auto u:ans)
    //    {
    //        cout<<u<<" ";
    //    }
    //    cout<<endl;

    }
    return 0;
}