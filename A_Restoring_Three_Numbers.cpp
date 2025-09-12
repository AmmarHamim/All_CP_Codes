#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    vector<int>v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }


    sort(v.begin(),v.end());
    int a=v[3]-v[0];
    int b=v[3]-v[1];
    int c=v[3]-v[2];
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}