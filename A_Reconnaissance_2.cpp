#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll d = abs(v[0]-v[n-1]);
    ll ind1=1,ind2=n;
    for(int i=0;i<n;i++)
    {
        ll m = abs(v[i]-v[i+1]);
        if(m<d)
        {
            d=m;
            ind1=i+1;
            ind2=i+2;

        }
    }
    cout<<ind1<<" "<<ind2<<endl;
    return 0;
}