#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool isbalanced(char c1, char c2)
{
    if(c1=='('&&c2==')' || c1=='{'&&c2=='}' || c1=='['&&c2==']')
    return true;
    else return false;
}
int main()
{
    fast_io;

    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char>st;
        bool check=true;
        for(auto u:s)
        {
            if(u=='('||u=='{'||u=='[')st.push(u);
            else
            {
                if(st.empty())
                {
                    check=false;
                    break;
                }
                else 
                {
                    if(isbalanced(st.top(),u))
                    {
                        check=true;
                        st.pop();
                    }
                    else
                    {
                        check=false;
                        break;
                    }
                }
            }
        }
        if(!st.empty())check=false;

        if(check)yes;
        else no;
        }
    return 0;
}