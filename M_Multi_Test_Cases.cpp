#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll count=0;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==1)
            {
                count++;
            }

        }
        cout<<count<<endl;
    }
    return 0;
}