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
        int l1,r1,l2,r2;
        cin>>l1>>r1;
        cin>>l2>>r2;

        if(r1<l2||l1>r2)//exclusive
        {
            cout<<1<<endl;
            continue;
        }

        vector<int>v(103,0);
        for(int i=l1;i<=r1;i++)
        {
            v[i]++;
        }
        for(int i=l2;i<=r2;i++)
        {
            v[i]++;
        }

        int ans=0;
        for(int i=1;i<=100;i++)
        {
            if(v[i]==2&&v[i-1]>0)ans++;
            if(v[i]==1&&v[i-1]==2)ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


//HAHAHAHA
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
//         int l1,r1,l2,r2;
//         cin>>l1>>r1;
//         cin>>l2>>r2;

//         int l=max(l1,l2);
//         int r=min(r1,r2);
//         if(l>r)//exclusive
//         {
//             cout<<1<<endl;
//             continue;
//         }

//         int ans=r-l;
//         if(min(l1,l2)<l)ans++;//bame
//         if(max(r1,r2)>r)ans++;//dane
//         cout<<ans<<endl;

        
//     }
//     return 0;
// }