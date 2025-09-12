#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    string target="hello";
    int k=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==target[k])k++;
    }
    if(k==target.size())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}