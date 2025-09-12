#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;
    int x=n*3;
    vector<int>v(x+1);
    vector<int>indx;

    for(int i=1;i<=x;i++)
    {
        cin>>v[i];
    }

    int arr[x]={-1};

   while(1)
   {
        int k=1;
        for(int i=1;i<=x;i++)
        {
            if(v[i]==k)
            {
                indx.push_back(i);

                if(indx.size()==3)
                {
                    break;
                }
            }
        }
        int mid=indx[1];
        arr[k]=mid;
        k++;
        if(k==x)break;
   }
   sort(arr,arr+x);

   for(int i=0;i<=x;i++)
   {
       if(arr[i]>0)
   }

    
    return 0;
}