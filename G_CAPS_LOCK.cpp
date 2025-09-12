#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;cin>>s;

    for(auto &ch:s)
    {
        if(islower(ch))
        {
            ch=toupper(ch);
        }
    }

    cout<<s<<endl;
    return 0;
}