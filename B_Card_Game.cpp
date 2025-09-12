#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int score(int x,int y)
{
    if(x>y)
    return 1;
    if(y>x) return -1;
    return 0;
}
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    if(score(a,c)+score(b,d)>0)ans++;
    if(score(a,d)+score(b,c)>0)ans++;
    if(score(a,c)+score(b,d)>0)ans++;
    if(score(a,d)+score(b,c)>0)ans++;

    cout<<ans<<endl;

    }
    
    return 0;
}