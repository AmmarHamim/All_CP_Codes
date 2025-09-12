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
        int n, q;
        cin>>n>>q;
        string a, b;
        cin>>a>>b;

        vector<vector<int>> freqa(n+1, vector<int>(26, 0));
        vector<vector<int>> freqb(n+1, vector<int>(26, 0));

        for(int i=1; i<=n; i++)
        {
                freqa[i] = freqa[i-1];
                freqb[i] = freqb[i-1];
            freqa[i][a[i-1]-'a']++;
            freqb[i][b[i-1]-'a']++;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<26;j++)
            {
                cout<<freqa[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
