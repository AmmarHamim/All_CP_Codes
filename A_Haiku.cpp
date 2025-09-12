#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    vector<string>v(3);
    vector<int>test={5,7,5};
    for(int i=0;i<3;i++)
    {
        getline(cin,v[i]);
    }
    for(int i=0;i<3;i++)
    {
        ll ct=0;
    for(auto u:v[i])
    {
        if(u=='a'||u=='e'||u=='i'||u=='o'||u=='u')
        {
            ct++;
        }
    }
    if(ct!=test[i])
    {
        return cout<<"NO"<<endl,0;
    }
    }
    cout<<"YES"<<endl;

    return 0;
}