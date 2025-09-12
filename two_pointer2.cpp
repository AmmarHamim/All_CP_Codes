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

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x;
    cin >> x;

    int l = 0;
    int r = n - 1;

    int ind1,ind2;
    // int indc = INT_MAX;
    int diff = INT_MAX;
    while (l < r)
    {
        int sum = v[l] + v[r];
        if(abs(sum-x)<diff)
        {
            ind1=l;
            ind2=r;
            diff= abs(sum-x);
        }
        if (sum == x)
        {
            ind1=l;
            ind2=r;
            break;
        }
        if (sum < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << v[ind1] << " " << v[ind2] << endl;
    return 0;
}