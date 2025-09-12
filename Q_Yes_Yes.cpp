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
        string target;
        cin>>target;
        string s="Yes";
        string rstr;
        for(int i=0;i<20;i++)
        rstr+=s;

        if(rstr.find(target)!=string::npos)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}