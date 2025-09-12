#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    double avg=0;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg = sum/n;
    cout<<"Average: "<<avg<<endl;
    return 0;
}