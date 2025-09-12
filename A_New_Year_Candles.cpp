#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int a,b;
    cin>>a>>b;

    int ans=a;

    int temp=a;
    while(temp>=b)
    {

        ans+=temp/b;

        temp = temp/b + temp%b;
    }
    cout<<ans<<endl;
    return 0;
}