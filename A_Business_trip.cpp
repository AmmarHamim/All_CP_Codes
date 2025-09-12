#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll k;
    cin>>k;
    vector<int>v(12);
    ll sum=0;
    for(int i=0;i<12;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.rbegin(),v.rend());
    if(k>sum)
    cout<<-1<<endl;
    else if(k<=sum)
    {
        ll s=0;
        int i=0;
        while(k>s)
        {
            s+=v[i];
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}