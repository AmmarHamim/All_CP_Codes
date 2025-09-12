#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s,str;
    cin>>s;
    for(auto &u:s)
    {
        u=tolower(u);
        if(!(u=='a'||u=='o'||u=='i'||u=='y'||u=='u'||u=='e'))
        {
            str+='.';
            str+=u;
        }
    }
    cout<<str<<endl;
    return 0;
}