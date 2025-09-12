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
        ll x,y,d;

        cin>>x>>y>>d;

        ll ans = 2*max((x+d-1)/d,(y+d-1)/d);

        if((x+d-1)/d > (y+d-1)/d)ans--;
        cout<<ans<<endl;
    }
    return 0;
}

// it gives tle
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int main()
// {
//     fast_io;

//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll x,y,k;cin>>x>>y>>k;

//         ll sumx=0;ll sumy=0;

//         ll move=0;
//         while(sumx<x || sumy<y)
//         {
//             move++;

//             if(move%2==1)
//             {
//                 sumx+=min(k,x-sumx);
//             }

//             else 
//             {
//                 sumy+=min(k,y-sumy);
//             }
//         }
//         cout<<move<<endl;
//     }
//     return 0;
// }