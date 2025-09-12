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
        sort(v.begin(),v.end());

        // int sml=*min_element(v.begin(),v.end());
        int sml=v[0];

        for(int i=0,k=0;k<n/2&&i<n;i++)
        {
            if(v[i]!=sml)
            {
                cout<<v[i]<<" "<<sml<<endl;
                k++;
            }
        }
        }
    return 0;
}