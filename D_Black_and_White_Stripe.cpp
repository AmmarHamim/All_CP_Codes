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
        int n,k;string s;
        cin>>n>>k>>s;

        vector<ll>presum(n+1,0);

        for(int i=1;i<=n;i++)
        {
            if(s[i-1]=='W')
            {
                presum[i]= presum[i-1]+1;
            }
            else presum[i]=presum[i-1];
        }

        ll ctWmin=n;
        for(int i=k;i<=n;i++)
        {
            ctWmin=min(ctWmin,presum[i]-presum[i-k]);
        }
        cout<<ctWmin<<endl;
    }
    return 0;
}



//  SLIDIGNG WINDOW APPROACH AND FUCK TLE 

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
//         int n,k;string s;
//         cin>>n>>k>>s;
        
//         int left=0,right=0,ctW=0;
//         int ctWmin=INT16_MAX;

//         //expand the window untill it becomes k
//         while(right<k)
//         {
//             if(s[right]=='W')ctW++;
//             right++;
//         }

//         ctWmin=ctW;
//         // slide the window to the right
//         while(right<n)
//         {
//             // removing the leftmost ch=w's freq and adding the righmost w's freq
//             if(s[left]=='W')ctW--;
//             if(s[right]=='W')ctW++;
//             left++;right++;

//             ctWmin=min(ctW,ctWmin);
//         }
//         cout<<ctWmin<<endl;
//     }
//     return 0;
// }




// // TLE CRY MORE

// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define yes cout<<"YES"<<endl
// // #define no cout<<"NO"<<endl
// // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// // int main()
// // {
// //     fast_io;

// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         int n,k;cin>>n>>k;
// //         string s;cin>>s;
// //         int i=0;
// //         int ctwMin=INT16_MAX;
// //         while(i<=n-k)
// //         {
// //             string str=s.substr(i,k);
// //             int ctW=0;
// //             int j=0;
// //             while(j<str.size())
// //             {
// //                 if(str[j]=='W')
// //                 ctW++;
// //                 j++;
// //             }
// //             ctwMin=min(ctwMin,ctW);
// //             i++;
// //         }
// //         // for(auto u:v)
// //         // {
// //         //     cout<<u<<" ";
// //         // }
// //         // cout<<endl;
// //         cout<<ctwMin<<endl;
// //     }
// //     return 0;
// // }