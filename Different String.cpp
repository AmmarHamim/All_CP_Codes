#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string r="";
        r=s;
        for(int i=0; i<r.size()-1; i++)
        {
            swap(r[i], r[i+1]);
        }
        if(s==r)
        {
            cout<<"NO"<<'\n';
            //continue;
        }
        else
        cout<<"YES"<<'\n'<<r<<'\n';
    }

    return 0;
}
