#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,k;cin>>n>>k;
    vector<ll>v;
    ll ct=0;

    if(k==1 && n>1)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            ct++;
            v.push_back(i);
            n=n/i;
            if(ct==k-1 && n>1)
            {
                v.push_back(n);
                break;
            }
        }
        if(k==v.size())break;
    }

    if(k==v.size())
    {
        for(auto u:v)
        {
            cout<<u<<" ";
        }
    }
    else cout<<-1<<endl;
    return 0;
}