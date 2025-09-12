#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll a = sqrt((s2*s3)/s1);
    ll b = sqrt((s1*s3)/s2);
    ll c = sqrt((s1*s2)/s3);

    cout<<4*(a+b+c)<<endl;
    return 0;
}