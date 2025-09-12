#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    fast_io;

    ll x;
    cin >> x;
    ll a = 1, b = x;
    ll minp = x;
    ll j=1;
    for (ll i = 1; i * i <= x; i++)
    {
        if(x%i==0)j=x/i;
        if(max(i,j)<minp && lcm(i,j)==x)
        {
            minp=max(i,j);
            a=i;
            b=j;
        }
    }
    cout << a << " " << b << endl;
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

//     int x;cin>>x;
//     int a=1,b=1;
//     int minp=INT16_MAX;
//     for(int i=1;i<=x;i++)
//     {
//         for(int j=1;j<=x;j++)
//         {
//             if(x%i==0 && x%j==0 && lcm(i,j)==x)
//             {
//                 if(max(i,j)<minp)
//                 {
//                     minp=max(i,j);
//                     a=i;
//                     b=j;
//                 }
//             }
//         }
//     }
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }