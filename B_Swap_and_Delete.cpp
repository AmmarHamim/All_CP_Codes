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
        string s;
        cin>>s;
        int zero=0,one=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')zero++;
            else one++;
        }
        int i=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if(zero>0)zero--;
                else break;
            }
            else
            {
                if(one>0)one--;
                else break;
            }
        }
        cout<<s.size()-i<<endl;
    }
    return 0;
}