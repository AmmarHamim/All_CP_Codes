#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void primeFactors(ll n)
{
    vector<pair<ll,int>>factors;

    ll ct=0;
    for(int i=2;i*i<=n;i++)
    {
        ct=0;
        while(n%i==0)
        {
            ct++;
            n/=i;
        }
        if(ct>0)factors.push_back({i,ct});
    }

    if(n!=1)factors.push_back({n,1}); // means n is a prime itself


    for(auto [p,exp]:factors)
    {
        cout<<p<<"^"<<exp<<" ";
    }
    cout<<endl;

}

int main()
{
    fast_io;

    ll n;cin>>n;

    primeFactors(n);

    return 0;
}