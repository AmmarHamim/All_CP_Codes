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
        string str="codeforces";
        char ch;
        cin>>ch;
        int in=str.find(ch);
        if(in>=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}