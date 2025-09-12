#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s,t;
    cin>>s>>t;
    
    int k=(t[0]-s[0]+26)%26;
    
    bool ck = true;
    for (int i=1;i<s.size();i++) 
    {
        int currentK = (t[i] - s[i]+26)%26;
        if (currentK!=k) 
        {
            ck=false;
            break;
        }
    }
    
    if (ck)
        cout << "Yes\n";
     else 
        cout << "No\n";
    return 0;
}