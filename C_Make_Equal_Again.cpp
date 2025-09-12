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
        if(v.size()==1)
        {
            cout<<0<<endl;
            continue;
        }

        int countfirst=1;
        int countlast=1;

        bool keepfirst=true;
        bool keeplast=true;
        for(int i=1;i<n;i++)
        {
            if(v[i-1]==v[i]&&keepfirst)countfirst++;
            else{
                keepfirst=false;
            }
            if(v[n-i]==v[n-i-1]&&keeplast)countlast++;
            else
            {
                keeplast=false;
            }
        }

        if(v[0]==v[n-1] && countfirst==n)
        {
            cout<<0<<endl;
        }
        else
        {
            if(v[0]==v[n-1])
            {
                cout<<n-(countfirst+countlast)<<endl;
            }
            else
            cout<< n-max(countfirst,countlast)<<endl;
        }
    }
    return 0;
}