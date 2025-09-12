#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b;
        cin>>a>>b;
        ll sum=0;
        for(int j=a;j<=b;j++)
        {
            if(j%2==1)sum+=j;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}