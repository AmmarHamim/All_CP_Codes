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
        int cta=0,ctb=0;
        bool flg=true;
        bool flgb=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                cta++;
                if(ctb==1)
                {
                    flg=false;
                    break;
                }
                ctb=0;
            }
         // else if(s[i]=='b')
         else
            {
                ctb++;
                if(cta==1)
                {
                    flg=false;
                    break;
                }
                cta=0;
            }
        }
        if(cta==1||ctb==1)
            {
                flg=false;
            }
        if(flg)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}