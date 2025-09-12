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
    int lastseen[3]={0,0,0};
    int ct=0;
    int n=s.length();
    int l=0;
    int r=0;
    // int rr=0;
    while(r<n)
    {
        lastseen[s[r]-'a']++;
        while(lastseen[0] && lastseen[1] && lastseen[2])
        {
            ct+=n-r;
            lastseen[s[l]-'a']--;
            l++;
        }
        // else rr++;
        r++;
    }
    cout<<ct<<endl;
    return 0;
}

// another approach

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int main()
// {
//     fast_io;

//     string s;cin>>s;
    
//     int lastseen[3]={-1,-1,-1};
//     int count=0;

//     for(int i=0;i<s.length();i++)
//     {
//         lastseen[s[i]-'a']=i;

//         if(lastseen[0]!=-1&&lastseen[1]!=-1&&lastseen[2]!=-1)
//         {
//             count+= 1+ min({lastseen[0],lastseen[1],lastseen[2]}); // the number of substr ending at the index i
//         }                                                          // that has abc is min(lastseen index)+1
//     }
//     cout<<count<<endl;

//     return 0;
// }