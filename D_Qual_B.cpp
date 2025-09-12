#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,k;
    cin>>n>>k;
    string s;cin>>s;

    for(auto& u:s)
    {
        if(k>0&&u=='o')
        {
            k--;
        }
        else if(k<=0&&u=='o') u='x';
    }
    cout<<s<<endl;
    return 0;
}