#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tt;
    cin>>tt;
    while(tt--)
    {
        ll n,m;
        cin>>n>>m;
         vector<ll>a(n);
        for (int i=0;i<n;i++) 
        {
            cin>>a[i];
        }

        ll b;cin>>b;

        vector<ll>v(n);
        bool ct = true;

        v[0]=min(a[0], b-a[0]);
        
         for(int i=1;i<n;i++)
         {
             ll vall1 = a[i];
             ll vall2 = b-a[i];

              if (vall1>=v[i-1] && vall2>=v[i-1])
            {
                v[i] = min(vall1,vall2);
            }
            else if (vall1>=v[i-1])
            {
                v[i]=vall1;
            }
            else if (vall2>=v[i-1])
            {
                v[i]=vall2;
            }
            else
            {
                ct=false;
                break;
            }
         }

         if(ct)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

    }
}