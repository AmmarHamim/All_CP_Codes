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
        int xc,yc,k;
        cin>>xc>>yc>>k;
        
            for(int i=1;i<=k/2;i++)
            {
            cout<<xc<<" "<<yc-i<<endl;//or xc-i is also good
            cout<<xc<<" "<<yc+i<<endl;
            }
        if(k%2==1)cout<<xc<<" "<<yc<<endl;
    }
    return 0;
}