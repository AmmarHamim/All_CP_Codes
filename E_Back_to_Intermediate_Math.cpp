#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    
    int t;
    cin>>t;
    cout << fixed << setprecision(3);
    for(int i=1;i<=t;i++)
    {
    double d,v,u;
    cin>>d>>v>>u;
    if(u<=v||u==0||v==0)
    cout<<"Case "<<i<<": can't determine"<<endl;
    else
    {
        double shorttime= d/u;
        double time = d/sqrt(u*u-v*v);
        double ans= time-shorttime;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    }
    return 0;
}