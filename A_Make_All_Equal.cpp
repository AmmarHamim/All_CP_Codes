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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(),v.end());

        // bool uni=true;
        // for(int i=1;i<n;i++)
        // {
        //     if(v[i]==v[i-1])
        //     {
        //         uni=false;
        //         break;
        //     }
        // }
        // if(uni)
        // {
        //     cout<<n-1<<endl;
        // }
        // else
        int freq=1;
        int maxfreq=0;
        for(int i=1;i<n;i++)
        {
            if(v[i]==v[i-1])
            {
                freq++;
            }
            else
            {
                maxfreq=max(freq,maxfreq);
                freq=1;
            }
        }
        maxfreq=max(freq,maxfreq);
        cout<<n-maxfreq<<endl;
    }
    return 0;
}