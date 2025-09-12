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

    int k;
    cin >> k;
    char ch = 'A';
    for (int i = 0; i < k; i++)
    {
        cout << ch++;
    }
    return 0;
}