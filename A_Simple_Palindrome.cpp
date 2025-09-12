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
        int n;cin>>n;
        string result;
        string s="aeiou";

        for(int i=0;i<n;i++)
        {
            result+=s[i%5];
        }
        sort(result.begin(),result.end());

        cout<<result<<endl;
    }
    return 0;
}