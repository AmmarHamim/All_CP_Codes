#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>f(7,0);
        for(int i=0;i<s.size();i++)
        {
            f[s[i]-'A']++;
        }
        int result=0;
        for(int i=0;i<7;i++)
        {
            if(f[i]<m)
            {
                result+=(m-f[i]);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}