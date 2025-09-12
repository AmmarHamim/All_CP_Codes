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
        ll n;string s;
        cin>>n>>s;

      ll sq = sqrt(n);

      if(sq*sq!=n)
      {
        no;
        continue;
      }

      ll ones = 2*sq + 2* (sq-2);

      ll ct=0;
      for(auto u:s)
      {
          if(u=='1')ct++;
      }
      if(ct==ones)yes;
      else no;
    }
    return 0;
}