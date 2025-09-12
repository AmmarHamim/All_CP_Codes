// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define yes cout<<"YES"<<endl
// // #define no cout<<"NO"<<endl
// // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// // int main()
// // {
// //     fast_io;

// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         ll b,k,s;cin>>b>>k>>s;

// //         s++;
// //         ll two=(s+(b+k-1))/(b+k);
// //         if(b>=two)no;
// //         else yes;
// //     }
// //     return 0;
// // }

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
//         ll b,k,s;cin>>b>>k>>s;

//         ll tar=s+1;
//         ll l=1,h=2*tar;
//         while(l<=h)
//         {
//             ll mid=(l+h/2);
//             ll p= mid/2;
//             ll r=mid%2;
//             ll dug= p*(b+k)+r*b;

//             if(dug>=t)h=mid-1;
//             else l=mid+1;
//         }

//         if(l%2==0)yes;
//         else no;
//     }
//     return 0;
// }


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
        ll x,y,a;
        cin>>x>>y>>a;
        int t=a+1;
        if(x>=t)no;
        else if(x+y>=t)yes;
        else
        {
            ll s=x+y;
            ll c1=t-x;
            ll kc1=(c1+s-1)/s;
            ll d1 = 2*(kc1+1)-1;

            ll kc2 = (t+s-1)/s;
            ll d2=2*kc2;

            int mind=min(d1,d2);

            if(mind%2==0)yes;
            else no;
        }
    }
    return 0;
}
