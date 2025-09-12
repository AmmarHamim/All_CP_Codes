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
        int n;cin>>n;
        string s;cin>>s;

        map<string,int>mp;
        bool found=false;

        for(int i=0;i<n-1;i++)
        {
            string sub= s.substr(i,2);

            if(mp.find(sub)==mp.end())
            {
                mp[sub]=i;
            }
            else
            {
                if(mp[sub]!=i-1)
                {
                    found=true;
                    break;
                }
            }
        }
        if(found)yes;
        else no;
    }
    return 0;
}