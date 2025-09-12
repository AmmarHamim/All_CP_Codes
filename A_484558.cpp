#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;

   string ans;
   if(n==0)
   {
    ans='0';
   }
    while(n)
    {
        int rem = n%16;
        if(rem<10) ans+= rem+'0';
        else ans+= (rem-10)+'A';
        n/=16;
    }

    reverse(ans.begin(),ans.end());
    if(ans.size()==1)
    {
        ans='0'+ans;
    }

    cout<<ans<<endl;
    return 0;
}