#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int atmost(vector<int>&v,int k)
{
    // unordered_map<int,int>mpp;
    vector<int>freq(100001,0);
    int l=0,r=0,ct=0;
    int distinct=0;
    while(r<v.size())
    {
        if(freq[v[r]]==0)distinct++;
        freq[v[r]]++;
        // mpp[v[r]]++;

        while(distinct>k)
        {
            // mpp[v[l]]--;
            freq[v[l]]--;
            if(freq[v[l]]==0)distinct--;
            l++;
        }
        if(distinct<=k)
        {
            ct+= r-l+1;
            //  r++;
        }
        r++;
    }
    return ct;
}
int main()
{
    fast_io;

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int ans = atmost(v,k)-atmost(v,k-1);
    cout<<ans<<endl;
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// int atmost(vector<int>&v,int k)
// {
//     unordered_map<int,int>mpp;
//     int l=0,r=0,ct=0;
//     while(r<v.size())
//     {
//         mpp[v[r]]++;

//         while(mpp.size()>k)
//         {
//             mpp[v[l]]--;
//             if(mpp[v[l]]==0)mpp.erase(v[l]);
//             l++;
//         }
//         if(mpp.size()<=k)
//         {
//             ct+= r-l+1;
//             //  r++;
//         }
//         r++;
//     }
//     return ct;
// }
// int main()
// {
//     fast_io;

//     int n,k;
//     cin>>n>>k;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }

//     int ans = atmost(v,k)-atmost(v,k-1);
//     cout<<ans<<endl;
    
//     return 0;
// }