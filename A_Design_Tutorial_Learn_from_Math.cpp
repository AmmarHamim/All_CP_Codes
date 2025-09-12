#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;cin>>n;

    if(n%2==1) cout<<9<<" "<<n-9<<endl;
    else cout<<4<<" "<<n-4<<endl;
    return 0;
}