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

        int start=0;
        int ct=0;

        if(s[0]==')'||s[s.size()-1]=='(')no;

        else if(count(s.begin(),s.end(),'?')%2==0)yes;
        else no;

        }
    return 0;
}