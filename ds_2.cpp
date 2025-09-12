#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void bs(int arr[],int n,int tar)
{
    int l=0,h=n-1;
    bool ck=false;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==tar)
        {
            ck=true;
            break;
        }
        if(arr[mid]<tar)l=mid+1;
        else h=mid-1;
    }

    if(ck)cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

}
int main()
{
    fast_io;

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int temp;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(arr[i]>arr[j])
          {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
        }
    }

    int tar;cin>>tar;
    bs(arr,n,tar);


//     int tar;cin>>tar;
//     bool found=false;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]==tar)
//        {
//         found=true;
//         cout<<i<<" ";
//        }
//    }
    // if(found)cout<<"Found"<<endl;
    // else cout<<"Not Found"<<endl;
    // if(!found)cout<<"Not Found"<<endl;
    return 0;
}