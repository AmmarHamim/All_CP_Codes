#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
    char arr[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    //itterate through cols and try to find horizontal reds
    string ans="B";
    for(int i=0;i<8;i++)
    {
       bool allred=true;
       for(int j=0;j<8;j++)
       {
           if(arr[i][j]!='R')
           {
            allred=false;
            break;
           }
       }
       if(allred)
       {
        ans='R';
        break;
       }
    }

    cout<<ans<<endl;
    }


    return 0;
}