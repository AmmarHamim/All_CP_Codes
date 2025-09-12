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
        string s;
        cin>>s;

        reverse(s.begin(),s.end());
        int lower=0,upper=0;
        string ans;
        for(auto u:s)
        {
            if(u=='b')lower++;
            else if(u=='B')upper++;

            else 
            {
                if(islower(u))
                {
                    if(lower>0)lower--;
                    else ans+=u;
                }
                else if(isupper(u))
                {
                    if(upper>0)upper--;
                    else ans+=u;
                }
            }
        }

        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}