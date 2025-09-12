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
        ll n,m,k;cin>>n>>m>>k;

        int ck;
        if(m%k)
        {
            ck=m%k;
        }
        else ck=1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int val=((j+(ll)ck*i)%k)+1;
                cout<<val<<" ";
            }
            cout<<'\n';
        }
        // cout<<endl;
    }
    return 0;
}