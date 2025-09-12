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
        string s;int q;
        cin>>s>>q;
        while(q--)
        {
            int l,r;cin>>l>>r;

            s[l-1]= r+'0';
            if(s.find("1100")!= string :: npos)yes;
            else no;
        }
    }
    return 0;
}