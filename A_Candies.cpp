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
        ll n;cin>>n;

      ll k=2;
      ll sum=1;
       while(true)
       {
            sum+=pow(2,k-1);
            k++;
            if(n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
       }
    }
    return 0;
}