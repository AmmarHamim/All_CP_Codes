#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;

     for(int i=1;i<=t;i++)
     {
        int p,s,r;
        cin>>p>>s>>r;

        if(p==s&&r!=1)
        cout<<"Case "<<i<<": No"<<endl;
        else cout<<"Case "<<i<<": Yes"<<endl;
     }
    return 0;
}