#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++)
    {
        string s;
        getline(cin,s);
        cout<<i<<". "<<s<<endl;
    }
    return 0;
}