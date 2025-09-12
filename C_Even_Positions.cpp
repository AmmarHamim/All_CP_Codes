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
        string s;
        cin >> s;

        vector<ll>v;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')v.push_back(i);
            else if(s[i]==')')
            {
                ans+=i-v.back();
                v.pop_back();
            }
            else
            {
                if(v.size()==0)
                {
                    v.push_back(i);
                }
                else 
                {
                    ans+=i-v.back();
                    v.pop_back();
                }
            }

        }
        cout <<ans<< endl;
    }
return 0;
}