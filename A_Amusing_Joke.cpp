#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1=s1+s2;
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s1==s3)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}