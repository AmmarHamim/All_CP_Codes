#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    string s;cin>>s;
    int q;cin>>q;
    bool reversed=false;
    while(q--)
    {
        int task;cin>>task;

        if(task==1) //reverse(s.begin(),s.end());
        {
            reversed=!reversed;
        }
        else if(task==2)
        {
            int f;char ch;
            cin>>f>>ch;
            if(f==1&&!reversed || f==2&&reversed) s=ch+s;
            else s+=ch;
        }
    }
    if(reversed)reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}