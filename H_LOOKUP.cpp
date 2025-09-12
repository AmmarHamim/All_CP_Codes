#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string str,s;
    cin>>str>>s;
    if(str.find(s)!=string::npos)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}