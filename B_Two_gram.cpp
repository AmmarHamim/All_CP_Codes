#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    string s,str;
    cin>>s;
    ll flg=0;
    for(int i=0;i<n-1;i++)
    {
        ll ct=0;
        for(int j=0;j<n-1;j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])
            {
                ct++;
                if(flg<ct)
                {
                    flg=ct;
                    str = string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
    }
    cout<<str<<endl;
    return 0;
}