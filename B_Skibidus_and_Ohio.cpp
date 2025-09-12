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
        bool ct=true;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==str[i+1])
            {
                ct = false;
                break;
            }
        }
        if(ct)cout<<str.size()<<endl;
        else cout<<1<<endl;
    }
}