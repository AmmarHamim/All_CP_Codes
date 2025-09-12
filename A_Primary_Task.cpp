#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() >= 3)
        {
            if (s[0] == '1' && s[1] == '0' && (s[2] >= '2' || (s.size() >= 4 && s[2] >= '1')))
            {
                yes;
                continue;
            }

            no;
        }
        else no;
    }
    return 0;
}