#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int findGCD(int a,int b)
{
    if(b==0)return a;
    return findGCD(b,a%b);
}

int main()
{
    fast_io;

    int a,b;cin>>a>>b;

    cout<<findGCD(a,b)<<endl;
    return 0;
}