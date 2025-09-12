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
        int r;
        cin>>r;

        if(r>=1900)cout<<"Division 1"<<endl;
        else if(r>=1600)cout<<"Division 2"<<endl;
        else if(r>=1400)cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }
    return 0;
}