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
        ll n;cin>>n;
        if(n%2==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            int r=n,l=1;
            for(int i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    cout<<l<<" ";
                    l++;
                }
                else
                {
                    cout<<r<<" ";
                    r--;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}