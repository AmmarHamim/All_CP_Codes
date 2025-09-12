#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tt;
    cin>>tt;
    while(tt--)
    {
        string str;cin>>str;
        int n = str.size();
        str = str.substr(0, n-2) + "i";
        cout<<str<<endl;
    }
}