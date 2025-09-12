#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    cout<<n<<" ";
    for(int i=1;i<n;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// void func(int n,vector<int>&v)
// {
//     if(n<=1)return;
//     swap(v[n-1],v[n-2]);
//     func(n-1,v);
//     //swap(v[n-1],v[n-2]);
// }
// int main()
// {
//     fast_io;

//     ll n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)v[i]=i+1;
//     func(n,v);
//     for(int i=0;i<n;i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }