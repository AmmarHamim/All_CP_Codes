#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    string str="yes";
    while(t--)
    {

        string s;
        cin>>s;
        for(auto &c:s)
        {
            c=tolower(c);
        }
        if(s==str)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}