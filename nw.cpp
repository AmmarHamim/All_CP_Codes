#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b,c,d; cin >> a>>b >> c >>d;
        int ans = 0;
        if(a==c and b==d)
        {
            ans = 0;
        }
        else if(c < d )
        {
            if(a==b)
            ans = d-b + (d-c);
            else if((d-c)>1)
            ans = -1;
            else 
            ans = d-c;

        }
        else if(b==d and a>c)
        {
            ans = a-c;
        }
        else if(a==c and b<d)
        {
            ans = (d-b)*2;
        }
       
        else ans = -1;
        cout << ans << endl;
    }
}