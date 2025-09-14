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
        
        vector<int>even,odd;
        for(int i=0;i<n;i++)
        {
            if(v[i]&1)odd.push_back(v[i]);
            else even.push_back(v[i]);
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());

        if(odd.size()==0)
        {
            cout<<0<<endl;
            continue;
        }

        ll esum=0;
        for(auto u:even)
        {
            esum+=u;
        }
        int indx=1;
        if(odd.size()>1)
        indx= (odd.size()+1)/2;
        else indx=1;
        for(int i=0;i<indx;i++)
        {
            esum+=odd[i];
        }
        cout<<esum<<endl;
    }
    return 0;
}