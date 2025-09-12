#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        int l=i+1;int r=n-1;
        while(l<r)
        {
            int sum= v[i]+v[l]+v[r];
            if(sum==0)
            {
                cout<<v[i]<<" "<<v[l]<<" "<<v[r]<<endl;
            }
            if(sum<0)l++;
            else r--;
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

//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     set<vector<int>>ans;
//     for(int i=0;i<n;i++)
//     {
//         set<int>st;

//         for(int j=i+1;j<n;j++)
//         {
//             int val = -(v[i]+v[j]);

//             if(st.find(val)!=st.end())
//             {
//                 vector<int>b= {v[i],v[j],val};
//                 sort(b.begin(),b.end());
//                 ans.insert(b);
//             }
//             else st.insert(v[j]);
//         }
//     }

//     for(auto it:ans)
//     {
//         cout<<'[';
//         for(auto i:it)
//         {
//             cout<<i<<" ";
//         }
//         cout<<"]"<<endl;
//     }


//     return 0;
// }