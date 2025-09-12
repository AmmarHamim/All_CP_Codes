#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        string str="codeforces";
        int ct=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=str[i])ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}