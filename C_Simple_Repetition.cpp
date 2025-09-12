#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool Prime(ll n)
{
    if(n==1)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        if(k==1)
        {
            if(Prime(n))yes;
            else no;
        }
        else if(k==2)
        {
            if(n==1)yes;
            else no;
        }
        else no;
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
//         ll x,k;cin>>x>>k;
//         if(x%2==0&&x>2)no;
//         else
//         {

//             if(x==1&&k==1)no;
//             else if(x==1 and k==2)yes;
//             else if(x==1 and k>=3)no;
//             else
//             {
//             bool flg=true;
//             for(int i=3;i*i<=x;i++)
//             {
//                 if(x%i==0)
//                 {
//                     flg=false;
//                     break;
//                 }
//             }

//             if(flg&&k==1)yes;
//             else no;
//         }
//         }
//     }
//     return 0;
// }