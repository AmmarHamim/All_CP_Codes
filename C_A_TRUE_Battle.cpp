#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tc;
    cin>>tc;
    while(tc--)
    {
        int nn;cin>>nn;
        string str;cin>>str;

        bool found=false;
        // for(int i=0;i<n-1;i++)
        // {
        //     if(str[i]=='1'&&str[i+1]=='1')
        //     {
        //         ck=true;
        //         break;
        //     }
        // }

        if(str.find("11")!= string::npos)found=true;
        
        if(str[0]=='1'||str[nn-1]=='1'|| found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}