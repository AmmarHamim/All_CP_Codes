#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;
    cin>>s;
    stack<char>st;

    for(auto u:s)
    {
        if(!st.empty()&&st.top()==u)
        {
            st.pop();
        }
        else
        {
            st.push(u);
        }
    }
    string ans;
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }

    reverse(ans.begin(),ans.end());


    cout<<ans<<endl;
    return 0;
}