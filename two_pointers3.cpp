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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());   
    for(int i=0;i<n;i++)
    {
        int l=i+1;int r=n-1;
        while(l<r)
        {
            int sum= v[l]+v[r];

            if(sum==v[i])
            {
                cout<<v[i]<<" "<<v[r]<<" "<<v[l]<<endl;
            }
            if(sum<v[i])r--;
            else l++;
        }
        
    }
    return 0;
}