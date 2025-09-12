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

    ll tcc;
    cin>>tcc;
    while(tcc--)
    {
        ll k,l1,r1,l2,r2;
        cin >>k>>l1>>r1>>l2>>r2;
        vector<ll>vec;
        ll powr = 1;
        while(powr<=r2)
        {
            vec.push_back(powr);
            if (powr>r2/k)break; 
            powr *= k;
        }

        ll ctt=0;
        for (ll p : vec)
        {
            ll x_min = max(l1, (l2 + p-1)/p);
            ll x_max = min(r1, r2/p);

            if (x_min<=x_max)
            {
                ctt+=(x_max-x_min+1);
            }
        }

        cout<<ctt<<endl;
    }
    return 0;
}