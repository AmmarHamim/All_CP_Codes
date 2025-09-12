#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tcc;
    cin>>tcc;
    while(tcc--)
    {
        ll m,a,b,c;
        cin>>m>>a>>b>>c;

        ll row_1,row_2;
        row_1 = min(m,a);
        row_2 = min(m,b);

        ll rem_row1 = m-row_1;
        ll rem_row2 = m-row_2;
        ll vudaigulu = min(c,rem_row1+rem_row2);

        ll ans= row_1+row_2+vudaigulu;
        cout<<ans<<endl;
    }
    return 0;
}