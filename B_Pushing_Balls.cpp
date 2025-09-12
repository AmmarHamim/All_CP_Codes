// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define yes cout<<"YES"<<endl
// // #define no cout<<"NO"<<endl
// // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// // int main()
// // {
// //     fast_io;

// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         int n,m;cin>>n>>m;
// //         vector<string>grid(n);
// //         for(int i=0;i<n;i++)
// //         {
// //             cin>>grid[i];
// //         }

// //         bool ck=true;

// //         for(int i=0;i<n;i++)
// //         {
// //             if(!ck)break;
// //             for(int j=0;j<m;j++)
// //             {
// //                 if(grid[i][j]=='1')
// //                 {
// //                     if((i>0 && grid[i-1][j]=='0') && (j>0 && grid[i][j-1]=='0'))
// //                     {
// //                         ck=false;break;
// //                     }
// //                 }
// //             }
// //         }

// //         if(ck)yes;
// //         else no;
// //     }
// //     return 0;
// // }

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
        int n,m;cin>>n>>m;
        vector<string>grid(n);
        for(int i=0;i<n;i++)
        {
            cin>>grid[i];
        }

        bool left[n][m]={false};
        bool up[n][m]={false};
        for(int i=0;i<n;i++)
        {
            bool valid=true;
            for(int j=0;j<m;j++)
            {
                left[i][j]=valid;
                if(grid[i][j]!='1')valid=false;
            }
        }
        for(int j=0;j<m;j++)
        {
            bool valid=true;
            for(int i=0;i<n;i++)
            {
                up[i][j]=valid;
                if(grid[i][j]!='1')valid=false;
            }
        }

        bool ck=true;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    if(!left[i][j] && !up[i][j])
                    {
                        ck=false;break;
                    }
                }
            }
            if(!ck)break;
        }

        if(ck)yes;
        else no;
    }
    return 0;
}

