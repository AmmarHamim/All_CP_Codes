#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    while(1)
    {
        vector<int>v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==0&&v[1]==0&&v[2]==0)break;
        else
        {
            if(v[0]*v[0]+v[1]*v[1]==v[2]*v[2])cout<<"right"<<endl;
            else cout<<"wrong"<<endl;
        }


    }
    return 0;
}