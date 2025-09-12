#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int n=1e7;
vector<ll>primes;

void sieve()
{
    vector<bool>isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for(ll i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
            for(ll j=i*i;j<=n;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}
int main()
{
    fast_io;

    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        ll d;cin>>d;

        ll p1 = *lower_bound(primes.begin(),primes.end(), 1+d);
        ll p2 = *lower_bound(primes.begin(),primes.end(), p1+d);

        cout<<p1*p2<<endl;
        // cout<<primes.size()<<endl;
    }
    return 0;
}