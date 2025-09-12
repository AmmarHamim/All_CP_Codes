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
        ll g,l;
        cin>>g>>l;
        if(l%g==0)cout<<g<<" "<<l<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}