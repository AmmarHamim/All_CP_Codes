#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<int>v;
        ll k=1;
        while(n!=0)
        {
            if(n%10!=0)
            {
                v.push_back((n%10)*k);
            }
            n/=10;
            k*=10;
        }
        cout<<v.size()<<endl;
        for(auto u:v)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }
    return 0;
}