#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool islucky(int num)
{
    while(num>0)
    {
        if(num%10!=4&&num%10!=7)
        return false;
        num/=10;
    }
    return true;
}
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<int>lucky;
    for(int i=1;i<=1000;i++)
    {
        if(islucky(i))
        {
            lucky.push_back(i);
        }
    }
    bool ck=false;
    for(auto u:lucky)
    {
        if(n%u==0)ck=true;
    }
    if(ck)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}