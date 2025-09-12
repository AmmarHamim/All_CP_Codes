#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
        {
            i+=2;
        }
        else if(s[i]=='1'&&s[i+1]=='4')
        {
            i+=1;
        }
        else if(s[i]=='1')
        {
            //i+=1;
        }
        else 
        {
           return cout<<"NO"<<endl,0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}