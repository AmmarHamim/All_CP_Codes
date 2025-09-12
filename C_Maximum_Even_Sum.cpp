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
//         ll a,b;cin>>a>>b;

//         ll ans=-1;
//         for (long long i=1;i*i<=b;i++) 
//         {
//         if (b % i == 0) 
//         {
//             ll sum1=a*i + b/i;
//             if(sum1%2==0)ans=max(ans,sum1);
//             if (i != b / i) 
//             {
//                 ll sum2= a*(b/i)+i;
//                 if(sum2%2==0)ans=max(ans,sum2);
//             }
//         }
//     }

//         if(ans!=-1)cout<<ans<<endl;
//         else cout<<-1<<endl;
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
        ll a,b;cin>>a>>b;

        if(a%2==0 and b%2==1)cout<<-1<<endl;
        else if(a%2==1 and b%2==1)cout<< a*b+1<<endl;
        else
        {
            if(((a*b)/2 +2)%2==0)cout<< (a*b)/2 +2 <<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}