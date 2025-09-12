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

    ll n;
    cin >> n;
    if (n < 0)
    {
        string s = to_string(n);
        string s1 = s.substr(0, s.size() - 1);
        ll n1 = stoi(s1);
        // cout<<n1<<endl;
        string s2 = s.substr(0, s.size() - 2) + s.back();
        ll n2 = stoi(s2);
        cout<<max(n1,n2)<<endl;
    }
    else
        cout << n << endl;

    return 0;
}