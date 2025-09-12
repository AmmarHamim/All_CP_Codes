#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    set<char>st;
    for(int i=0;i<str.size();i++)
    {
        if(isalpha(str[i]))
        {
            st.insert(str[i]);
        }
    }
    // for(auto u:st)
    // cout<<u<<" ";
    cout<<st.size()<<endl;
    
    return 0;
}