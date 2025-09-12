// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int main()
// {
//     fast_io;

//     int n,val;cin>>n>>val;
//     int k;cin>>k;
//     int arr[n+1];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }


//     // int j=n+1;
//     for(int i=n+1;i>=k;i--)
//     {
//         arr[i]=arr[i-1];
//     }

//     arr[k]=val;
//     n++;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
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

    int arr[100];
    int n=5;
    int k=2;
    int val=32;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=n;i>=k;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[k]=val;

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}