#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll tc;
    cin>>tc;
    while(tc--)
    {
        string str;cin>>str;
        
        reverse(str.begin(),str.end());
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='q')str[i]='p';
            else if(str[i]=='p')str[i]='q';
        }
        cout<<str<<endl;
    }
    return 0;
}