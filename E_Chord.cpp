#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    if(s=="ACE"||s=="FAC"||s=="BDF"||s=="CEG"||s=="DFA"||s=="EGB"||s=="GBD")
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}