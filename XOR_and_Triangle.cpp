#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool Possible(ll n,ll mid)
{
    ll z = n^mid;
    return (n+mid>z) && (n+z>mid) && (mid+z>n);
}


int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;

        ll l=1,h=n-1;
        ll ans=-1;
        while(l<=h)
        {
            ll mid=(l+h)/2;
            if(Possible(n,mid))
            {
                ans=mid;
                h=mid-1;
                // l=mid+1;
                
            }
            else l=mid+1;
            // else h=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int main()
// {
//     fast_io;

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;cin>>n;
//         if(n<=4)cout<<-1<<endl;
//         else cout<<n-1<<endl;
//     }
//     return 0;
// }