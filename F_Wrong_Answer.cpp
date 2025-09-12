#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll a,b;
    cin>>a>>b;
    if(a+b==0)cout<<9<<endl;
    else cout<< (a+b)-1<<endl;
    return 0;
}