#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }

    return n>1;
}
int main()
{
    fast_io;

    int n;cin>>n;

    if(isPrime(n))cout<<"Prime"<<endl;
    else cout<<"Composite"<<endl;
    return 0;
}