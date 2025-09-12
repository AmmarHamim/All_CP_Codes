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
        int k;
        cin>>k;
        vector<int>v(k);
        map<int,int>mpp;
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
            // mpp[v[i]]++;
        }
        int rem=k-2;
        int n=0,m=0;
        for(int i=0;i<k;i++)
        {
            if(rem%v[i]==0 && mpp[rem/v[i]])
            {
                // n=v[i];
                // // mpp[v[i]]--;
                // m=rem/n;

                cout<<v[i]<<" "<<rem/v[i]<<endl;
                break;
            }
            mpp[v[i]]++;

            // if(mpp[m])
            // {
            //     cout<<n<<" "<<m<<endl;
            //     break;
            // }
        }
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
//         int k;
//         cin>>k;
//         vector<int>v(k);
//         map<int,int>mpp;
//         for(int i=0;i<k;i++)
//         {
//             cin>>v[i];
//             mpp[v[i]]++;
//         }
//         int rem=k-2;
//         int n=0,m=0;
//         for(int i=0;i<k;i++)
//         {
//             if(rem%v[i]==0)
//             {
//                 n=v[i];
//                 mpp[v[i]]--;
//                 m=rem/n;
//             }

//             if(mpp[m])
//             {
//                 cout<<n<<" "<<m<<endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }