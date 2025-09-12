#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    string str;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]=='.')str+='0';
    else if(s[i]=='-'&&s[i+1]=='.')
    {
        str+='1';
        i++;
    }
    else
    {
        str+='2';
        i++;
    }
   }
    cout<<str<<endl;
    return 0;
}