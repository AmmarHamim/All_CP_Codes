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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    sort(v.rbegin(),v.rend());

    vector<int>a;
    int b=v[0];

    for(int i=1;i<=b;i++)
    {
        if(b%i==0)
        {
            a.push_back(b/i);
        }
    }

    sort(a.rbegin(),a.rend());

    int ans=0;
    for(int i=1;i<=v.size();i++)
     {
         if(a[i]!=v[i])
         {
            ans=v[i];
            break;
         }
     }

    cout<<b<<" "<<ans<<endl;
    return 0;
}