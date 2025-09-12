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
        map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            freq[v[i]]++;
        }

        int ind=0;
        for(int i=0;i<n;i++)
        {
            if(freq[v[i]]==1)
            {
                ind=i+1;
                break;
            }
        }
        cout<<ind<<endl;

    }
    return 0;
}