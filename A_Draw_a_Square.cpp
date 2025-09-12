#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;cin>>a>>b>>c>>d;

        if(a==b &&b==c && c==d)yes;
        else no;
    }
    return 0;
}