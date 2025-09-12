#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
    string s1,s2;
    ll m,n;
    cin>>m>>n;
    cin>>s1>>s2;
    string s1rev=s1,s2rev=s2;
    reverse(s1rev.begin(),s1rev.end());
    reverse(s2rev.begin(),s2rev.end());
    string str1=s1+s2rev;
    string str2=s2+s1rev;
    ll ct1=1,ct2=1;
    for(int i=0;i<str1.size()-1;i++)
    {
        if(str1[i]==str1[i+1])
        ct1++;
        if(str2[i]==str2[i+1])
        ct2++;
    }
    if(ct1<=2||ct2<=2)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    }
    return 0;
}