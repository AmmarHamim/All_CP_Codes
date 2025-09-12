#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    int sum=0;
    for(auto u:s)
    {
        if(u=='v')sum+=1;
        else sum+=2;
    }
    cout<<sum<<endl;
    return 0;
}