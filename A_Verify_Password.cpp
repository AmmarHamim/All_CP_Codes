#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        string r=s;
        sort(r.begin(),r.end());
        //cout<<r<<endl;
        // cout<<s<<endl;
        if(s==r)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}