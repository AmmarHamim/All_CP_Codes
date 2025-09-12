#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll flg=0;
        ll move=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            flg++;
            else 
            flg--;
            if(flg<0)
            {
                move++;
                flg=0;
            }
        }
        cout<<move<<endl;
    }
    return 0;
}