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
        if(s.length()%2==1)no;
        else
        {
            string a=s.substr(0,s.length()/2);
            string b= s.substr(s.length()/2);
            if(a==b)yes;
            else no;
        }
    }
    return 0;
}