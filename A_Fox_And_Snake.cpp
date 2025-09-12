#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    ll flag=2;

    for(int row=1;row<=n;row++)
    {
        if(row%2==0&&flag==2)
        {
            flag=4;
            for(int col=1;col<m;col++)
            {
                cout<<'.';
            }
            cout<<'#';
            cout<<"\n";
        }
       else if(row%2==0&&flag==4)
        {
            flag=2;
            cout<<'#';
            for(int col=2;col<=m;col++)
            {
                cout<<'.';
            }
            cout<<"\n";
        }
        else
        {
            for(int col=1;col<=m;col++)
            {
                cout<<'#';
            }
            cout<<"\n";
        }
    }
    return 0;
}