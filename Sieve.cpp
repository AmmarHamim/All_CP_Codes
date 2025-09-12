#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void Sieve(int n)
{
    vector<bool>primes(n+1,true);
    primes[0]=primes[1]=false;

    for(int i=2;i*i<=n;i++)
    {
        if(primes[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                primes[j]=false;
            }
        }
    }
    int ct=0;
    for(int i=2;i<=n;i++)
    {
        if(primes[i])
        {
            ct++;
        }
    }
    cout<<ct<<endl;
    for(int i=2;i<=n;i++)
    {
        if(primes[i])
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    fast_io;

    int n;cin>>n;
    Sieve(n);
    return 0;
}