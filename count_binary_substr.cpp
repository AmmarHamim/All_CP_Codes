#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    int prev=0;
    int curr=1;
    int sum=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            curr++;
        }
        else
        {
           // prev=curr;
            sum+=min(prev,curr);
            prev=curr;
            curr=1;
        }
    }
    sum+=min(prev,curr);
    cout<<sum<<endl;
    return 0;
}