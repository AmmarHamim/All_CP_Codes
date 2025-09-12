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
        int n;string s;
        cin>>n>>s;

        vector<int>even(26,false);
        vector<int>odd(26,false);

        bool ck=true;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
        int indx=ch-'a';

        if(i%2==0)
        {
            even[indx]=true;
        }
        else odd[indx]=true;

         if(even[indx]&&odd[indx])
         {
            ck=false;
         }
        }
        if(ck)yes;
        else no;
    }
    return 0;
}