#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string pi="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    ll n;
    cin>>n;
    string result(pi.begin(),pi.begin()+n+2);
    cout<<result<<endl;
    return 0;
}