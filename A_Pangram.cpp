#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char &c:s)
    {
       c=tolower(c);
    }
    set<char>st(s.begin(),s.end());
    //cout<<st.size()<<endl;
    if(st.size()==26)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}