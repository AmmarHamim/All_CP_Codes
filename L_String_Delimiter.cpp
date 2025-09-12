#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    string s;
    cin>>n>>s;
    bool enclosed=false;
    for(auto &ch:s)
    {
        if(ch=='"') enclosed=!enclosed;
        else if(ch==','&& !enclosed)ch='.';
    }
    cout<<s<<endl;
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int main()
// {
//     fast_io;

//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string ans;
//     int ind=0;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]=='"')ind++;
//         if(ind%2==1)
//         {
//             ans+=s[i];
//             continue;
//         }
//         else
//         {
//             if(s[i]==',')ans+='.';
//             else ans+=s[i];
//             continue;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }