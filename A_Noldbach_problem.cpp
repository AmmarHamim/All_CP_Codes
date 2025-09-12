#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool isPrime(int p)
{
    for(int i=2;i*i<=p;i++)
    {
        if(p%i==0)
        {
            return false;
        }
    }
    return p>1;
}
bool Possible(vector<int>v,int k,int n)
{
    int ct=0;
    for(int i=0;i<v.size()-1;i++)
    {
        int p = 1+v[i]+v[i+1];
        if(isPrime(p) && p<=n)ct++;
    }

    return ct>=k;
}
int main()
{
    fast_io;

    ll n,k;cin>>n>>k;

    vector<int>primes;
    for(int i=2;i<=n;i++)
    {
        bool flg=true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flg=false;
                break;
            }

        }
        if(flg)primes.push_back(i);
    }

    // for(auto u:primes)
    // {
    //     cout<<u<<" ";
    // }

    if(Possible(primes,k,n))yes;
    else no;
    return 0;
}