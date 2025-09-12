#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;cin>>n;

    vector<bool>v(n+1,false);
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        v[x]=true;
    }

     for(int i=1;i<=n;i++)
     {
         if(v[i]==false){
            cout<<i<<endl;
            break;
         }
     }
    return 0;
}