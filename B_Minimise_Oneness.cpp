#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll tc;
    cin>>tc;
    while(tc--)
    {
        int nn;cin>>nn;

        string result;
        for(int i=0;i<nn;i++)
        {
            if(i==1)result+='1';
            else result+='0';
        }
        cout<<result<<endl;
    }
    return 0;
}