#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        vector<vector<int>>vec(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>vec[i][j];
            }
        }
        vector<int>ar(2*n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ar[i-j+n-1]= min(ar[i-j+n-1],vec[i][j]);
            }
        }

        int result=0;
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i]<0) result+=abs(ar[i]);
        }
        cout<<result<<endl;
    }
    return 0;
}