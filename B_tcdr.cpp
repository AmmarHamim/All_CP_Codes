#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    string ans;
    for(auto u:s)
    {
        if(u!='a'&&u!='e'&&u!='i'&&u!='o'&&u!='u')
        ans+=u;
    }
    cout<<ans<<endl;
    return 0;
}