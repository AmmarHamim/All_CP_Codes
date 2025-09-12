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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int minst = v[0];
        int maxst = v[0];
        bool ck = true;

        for (int i = 1; i < n; i++)
        {
            int st = v[i];
            if (st == minst - 1)minst=st;
            else if (st == maxst + 1)maxst=st;
            else
            {
                ck = false;
                break;
            }
        }

        if (ck)
            yes;
        else
            no;
    }
    return 0;
}