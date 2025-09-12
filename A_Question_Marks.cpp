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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cta=n,ctb=n,ctc=n,ctd=n;
        int ans=0;
        for(int i=0;i<4*n;i++)
        {
            if(s[i]=='A'&&cta>0)
            {
                ans++;
                cta--;
            }
            else if(s[i]=='B'&&ctb>0)
            {
                ans++;
                ctb--;
            }
            else if(s[i]=='C'&&ctc>0)
            {
                ans++;
                ctc--;
            }
            else if(s[i]=='D'&&ctd>0)
            {
                ans++;
                ctd--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}