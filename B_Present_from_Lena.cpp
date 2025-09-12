#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    ll mid=0;
    for(int row=0;row<=n;row++)
    {
        for(int col=0;col<n-row;col++)
        cout<<"  ";
        for(int col=0;col<=mid;col++)
        {
            if(col>0)cout<<" ";
            cout<<col;
        }
        for(int col=mid-1;col>=0;col--)
        cout<<" "<<col;
        cout<<endl;
        mid++;
    }
    mid=n-1;
    for(int row=n-1;row>=0;row--)
    {
        for(int col=0;col<n-row;col++)
        cout<<"  ";
        for(int col=0;col<=mid;col++)
        {
            if(col>0)cout<<" ";
            cout<<col;
        }
        for(int col=mid-1;col>=0;col--)
        cout<<" "<<col;
        cout<<endl;
        mid--;
    }
    return 0;
}
