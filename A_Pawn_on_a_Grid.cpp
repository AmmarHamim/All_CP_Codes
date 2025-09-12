#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int r,c;
    cin>>r>>c;
    char arr[r][c];
    int ct=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='#')ct++;
        }
    }
    cout<<ct<<endl;
    return 0;
}