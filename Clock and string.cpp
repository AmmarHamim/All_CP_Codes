#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ct;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,ct=0;
        cin>>a>>b>>c>>d;
        for(int i=min(a,b); i<=max(a,b); i++)
        {
            if(c==i||d==i)
                ct++;
        }
        if(ct==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
