#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        set<char>st;
        if(s.length()==1)
        {
            cout<<s<<endl;
            continue;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])i++;
            else st.insert(s[i]);
        }

        for(auto u:st)
        {
            cout<<u;
        }
        cout<<endl;
    }
    return 0;
}