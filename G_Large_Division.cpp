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
    for(int i=1;i<=t;i++)
    {
        string a;
        ll b;
        cin>>a>>b;

        ll rem=0;

        for(auto c:a)
        {
            if(c=='-')continue;
            else 
            {
                rem=(rem*10 + (c-'0'))%b;
            }
        }

        if(rem==0)
        {
            cout<<"Case "<<i<<": "<<"divisible"<<endl;
        }
        else 
        cout<<"Case "<<i<<": "<<"not divisible"<<endl;
    }
    return 0;
}