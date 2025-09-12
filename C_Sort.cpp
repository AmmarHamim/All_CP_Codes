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
        ll n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        int freqa[n][26] = {0};
        int freqb[n][26] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (i != 0)
                {
                    freqa[i][j] = freqa[i - 1][j];
                    freqb[i][j] = freqb[i - 1][j];
                }
            }
            freqa[i][a[i] - 'a']++;
            freqb[i][b[i] - 'a']++;
        }
        while (q--)
        {
            int counta = 0;
            int countb = 0;
            int l, r;
            cin >> l >> r;
            if(l>r)swap(l,r);
            l--;
            r--;
            int ans = 0;
            for (int j = 0; j < 26; j++)
            {
                if (l == 0)
                {
                    counta = freqa[r][j];
                    countb = freqb[r][j];
                }
                else
                {
                    counta = freqa[r][j] - freqa[l - 1][j];
                    countb = freqb[r][j] - freqb[l - 1][j];
                }
                if (counta >= countb)
                    ans += counta - countb;
            }

            cout << ans << endl;
        }
    }
    return 0;
}

/// THIS GIVES TLE
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int main()
// {
//     fast_io;

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,q;
//         cin>>n>>q;
//         string a,b;
//         cin>>a>>b;
//         while(q--)
//         {
//             int l,r;
//             cin>>l>>r;
//            vector<int>freqa(26,0),freqb(26,0);

//            for(int i=l-1;i<r;i++)
//            {
//                freqa[a[i]-'a']++;
//                freqb[b[i]-'a']++;
//            }
//            int ans=0;
//            for(int i=0;i<26;i++)
//            {
//                ans+=abs(freqa[i]-freqb[i]);
//            }
//             cout<<ans/2<<"\n";
//         }
//     }
//     return 0;
// }