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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.rbegin(),v.rend());
        int bob=0,alice=0;
        for(int i=0;i<n;i++)
        {
            if(i&1)
            {
                int diff= v[i-1]-v[i];
                if(diff>k)
                {
                    v[i]+=k;
                    k=0;
                }
                else if(diff<=k)
                {
                    v[i]+=diff;
                    k-=diff;
                }
                bob+=v[i];
            }
            else 
            {
                alice+=v[i];
            }
        }
        cout<<alice-bob<<endl;
    }
    return 0;
}