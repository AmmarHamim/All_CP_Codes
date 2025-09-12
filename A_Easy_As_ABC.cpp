#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    char arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<string>v;
    v.push_back(arr[0][0]+arr[0][1]+arr[0][2]);
    v.push_back(arr[0][0]+arr[0][1]+arr[1][0]);
    v.push_back(arr[0][0]+arr[0][1]+arr[1][1]);
    v.push_back(arr[0][0]+arr[0][1]+arr[1][2]);
    v.push_back(arr[0][0]+arr[1][0]+arr[1][1]);
    v.push_back(arr[0][0]+arr[1][0]+arr[2][1]);
    v.push_back(arr[0][0]+arr[1][0]+arr[2][1]);
    v.push_back(arr[0][0]+arr[1][1]+arr[0][1]);
    v.push_back(arr[0][0]+arr[1][1]+arr[1][2]);

    // v.push_back(arr[0][1]+arr[0][2]+arr[0]+arr[1][2]);
    // v.push_back(arr[0][1]+arr[0][2]+arr[0]+arr[1][1]);

    // v.push_back(arr[0][2]+arr[])
    return 0;
}