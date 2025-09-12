// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int main()
// {
//     fast_io;

//     int n,pos;cin>>n>>pos;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=pos;i<n-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     n--;
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
    int k=2;
    int n=5;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int j=k;
    while(j<n)
    {
        arr[j]=arr[j+1];
        j++;
    }
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}