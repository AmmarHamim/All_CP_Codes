#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]-'0'+s[1]-'0'+s[2]-'0'==s[3]-'0'+s[4]-'0'+s[5]-'0')yes;
        else no;
    }
    return 0;
}