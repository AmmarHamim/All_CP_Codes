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
        string s;
        cin>>s;

        ll ans=0;
        ll ct=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                ct++;
            }
            else
            {
                if(ct>0)
                {
                    ans+=(ct+1);
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}