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
        string ans;
        for(int i=0;i<s.size()-1;i++)
        {
            if(i==0)ans+=s[i];
            if(s[i]==s[i-1])
            {
                ans+=s[i];
                i++;
            }

        }
        ans+=s[s.size()-1];
        cout<<ans<<endl;
    }
    return 0;
}