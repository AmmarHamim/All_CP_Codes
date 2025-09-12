#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    bool found=false;
    for(auto u:s)
    {
        if(u=='H'||u=='Q'||u=='9')found=true;
    }
    if(found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}