#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    getline(cin,s);
    string temp;
    vector<string> v;
    for (auto u : s)
    {
        if (u != ' ')
        {
            temp += u;
        }
        else
        {
            v.push_back(temp);
            temp.clear();
        }
    }
    v.push_back(temp);
    string ans;
    int m = 0;
    map<string, int> mp;
    for (auto u : v)
    {
        mp[u]++;
        m = max(m, mp[u]);
    }
    for(auto u:v)
    {
        if(mp[u]==m)
        {
            ans=u;
            break;
        }
    }
    ans+=to_string(m);
    cout<<ans<<endl;
    return 0;
}