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
        int n;char ch;
        cin>>n>>ch;
        string s;
        cin>>s;

        s+=s;

        if(ch=='g')
        {
            cout<<0<<endl;
            continue;
        }
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='g')
            {
                v.push_back(i);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==ch)
            {
                int indx= upper_bound(v.begin(),v.end(),i)-v.begin();

                ans=max(v[indx]-i,ans);
            }
        }
        cout<<ans<<endl;
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
//         int n;char ch;
//         cin>>n>>ch;
//         string s;cin>>s;

//         s+=s;

//         int ct=0;
//         int ans=0;
//         bool found=false;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]==ch&&!found)
//             {
//                 ct=0;
//                 found=true;
//             }
//             if(s[i]=='g')
//             {
//                 ans=max(ct,ans);
//                 // ct=0;
//                 found=false;
//             }

//             if(found)ct++;
            
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }