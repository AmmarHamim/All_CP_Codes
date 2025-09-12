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
    vector<ll> v(7);
    for(int i=0;i<7;i++)
    {
        cin>>v[i];
    }
    ll sum = 0;
    while (1)
    {
        for (int i = 0; i < 7; i++)
        {
            sum += v[i];
            if (sum >= n)
            {
                return cout << i + 1<<endl,0;
            }
        }
    }
    return 0;
}