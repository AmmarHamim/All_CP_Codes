#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0,y=0;
    ll coin=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='R')
        {
            x++;
            if(x==y&&s[i+1]=='R')
            {
                coin++;
            }
        }
        else if(s[i]=='U')
        {
            y++;
            if(x==y&&s[i+1]=='U')
            coin++;
        }
    }
    cout<<coin<<endl;
    return 0;
}