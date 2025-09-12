#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

   ll t,n;
   cin>>t;
   while(t--)
   {
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2-1<<endl;
    }
    else
    cout<<(n-1)/2<<endl;
   }
    return 0;
}