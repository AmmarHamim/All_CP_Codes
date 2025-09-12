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
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }

        sort(vec.begin(),vec.end());
        int min_val=vec[0];
        int max_val=vec[n-1];

        int score=0;
        for(int i=0;i<n-1;i++)
        {
            score+= max_val-min_val;
        }
        cout<<score<<endl;
    }
    return 0;
}