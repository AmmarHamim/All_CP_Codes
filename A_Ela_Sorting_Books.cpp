#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[s[i]]++;
        }

        string ans;
        for(int i=1;i<=k;i++)
        {
            int len=n/k;
            for(char ch='a';ch<='z';ch++)
            {
                if(len<=0)
                {
                    ans+=ch;
                    break;
                }

                if(freq[ch]==0)
                {
                    ans+=ch;
                    break;
                }
                freq[ch]--;
                len--;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}