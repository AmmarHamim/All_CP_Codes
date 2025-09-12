//using pq;

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;string s;
        cin>>n>>s;

        ll score=0;
        priority_queue<ll>pq;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                score+=i;
                int prev=i;
                int change=n-1-i;
                int diff=change-prev;
                pq.push(diff);
            }
            else
            {
                score+=n-1-i;
                int prev=n-1-i;
                int change=i;
                int diff=change-prev;
                pq.push(diff);
            }
        }

        for(int i=0;i<n;i++)
        {
            int val=pq.top();
            pq.pop();
            if(val>0)score+=val;

            cout<<score<<" ";
        }
        cout<<endl;
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
//         ll n;
//         string s;
//         cin>>n>>s;


//         ll score=0;
//         // vector<ll>curr(n,0),change(n,0);
//         vector<ll>gain;

//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='L')
//             {
//                 score+=i;
//                 int prev=i;
//                 int change=n-1-i;
//                 int diff=change-prev;

//                 gain.push_back(diff);
//             }

//             else 
//             {
//                 score+=n-1-i;
//                 int prev=n-1-i;
//                 int change=i;
//                 int diff=change-prev;
//                 gain.push_back(diff);
//             }
//         }

//         sort(gain.rbegin(),gain.rend());

//         // for(auto u:gain)
//         // {
//         //     cout<<u<<" ";
//         // }
//         // cout<<endl;


//         for(int i=0;i<n;i++)
//         {
//             if(gain[i]>0)score+=gain[i];

//             cout<<score<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }