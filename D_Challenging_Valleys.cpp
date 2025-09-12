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
        ll n;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(i==0||x!=v.back()) // merging the same elements into one
            {
                v.push_back(x);
            }
        }

        int numOfVal=0;
        if(v.size()==1)
        {
            yes;continue;
        }
        for(int i=0;i<v.size();i++)
        {
            if(i==0 && v[i+1]>v[i])numOfVal++;
            else if(i==v.size()-1 && v[i-1]>v[i])numOfVal++;
            else if(v[i]<v[i-1]&&v[i]<v[i+1])numOfVal++;
        }

        if(numOfVal==1)yes;
        else no;
    }
    return 0;
}