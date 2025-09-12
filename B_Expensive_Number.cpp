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
        string s;cin>>s;
        int ct=0;
        int indx=-1;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='0')ct++;
            else
            {
                indx=i;
                break;
            }
        }
        for(int i=0;i<indx;i++)
        {
            if(s[i]!='0')ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int main()
// {
//     fast_io;

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s;cin>>s;
//         int n=s.size();
//         int ct=0, rem=0;

//         for(auto u:s)
//         {
//             if(u=='0')ct++;
//             else rem = max(rem,ct+1);
//         }
//         cout<<n-rem<<endl;
//     }
//     return 0;
// }