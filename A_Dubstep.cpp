#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    string result;
    ll ct=0;
    ll f=0;
    bool ck=false;
    ll flg=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=2;
            flg++;
            if(ck&&flg==1)
            {
                result+=' ';
            }

        }
        else
        {
            ck=true;
            result+=s[i];
            flg=0;
        }
    }
    cout<<result<<endl;
    return 0;
}