#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;

    bool change = true;
    for(int i=1;i<s.size();i++)
    {
        if(islower(s[i])){
        change=false;
        break;
        }
    }

    if(change)
    {
        for(auto& u:s)
        {
            if(isupper(u))
            {
                u=tolower(u);
            }
            else u=toupper(u);
        }
    cout<<s<<endl;
    }
    else cout<<s<<endl;
    return 0;
}