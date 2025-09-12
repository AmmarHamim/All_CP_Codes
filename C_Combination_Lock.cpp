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
//         if(n==1)
//         {
//             cout<<1<<endl;
//             continue;
//         }
//         if(n==2||n==4)
//         {
//             cout<<-1<<endl;
//             continue;
//         }
    
//         vector<int>v(n);
//         for(int i=0;i<n;i++)
//         {
//             v[i]=i+1;
//         }
    
//         for(int i=1;i<n;i+=2)
//         {
//             swap(v[i],v[i-1]);
//         }

//         if(n%2==1)
//         {
//             swap(v[n-1],v[n-2]);
//         }
    
//         for(auto u:v)
//         {
//             cout<<u<<" ";
//         }
//         cout<<endl;
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
        ll n;cin>>n;
        if(n%2==0)
        {
            cout<<-1<<endl;
            continue;
        }

         for(int i=1;i<=n;i++)
         {
             ll val=(2*i-1)%n;
             if(val==0)val=n;

             cout<<val<<" ";
         }
         cout<<endl;
    }
    return 0;
}