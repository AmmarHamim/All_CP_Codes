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
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        
        bool ckodd = true;
        bool ckeven = true;

      for(int i=2;i<=n;i+=2)
      {
          if(v[i]%2!=v[2]%2)
          {
            ckeven=false;
            break;
          }
      }

       for(int i=1;i<=n;i+=2)
       {
           if(v[i]%2!=v[1]%2)
           {
            ckodd=false;
            break;
           }
       }

       if(ckeven&&ckodd)yes;
       else no;
    }
    return 0;
}