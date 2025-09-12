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
//         string p,s;
//         cin>>p>>s;

//         if(p==s)
//         {
//             yes;continue;
//         }
//         string sss;

//         int ctl=0,ctr=0;
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]=='L')
//             {
//                 ctl++;

//                 if(ctr>0)
//                 {
//                 int reqr=((ctr+1)/2);
//                 sss+=string(reqr,'R');
//                 ctr=0;
//                 }
//             }
//             else 
//             {
//                 ctr++;

//                 if(ctl>0)
//                 {
//                 int reql=((ctl+1)/2);
//                 sss += string(reql,'L');
//                 ctl=0;
//                 }
//             }
//         }

//         if(ctl>0) sss += string((ctl+1)/2,'L');
//         if(ctr>0) sss+=string((ctr+1)/2,'R');
//         if(sss==p)yes;
//         else no;
//     }
//     return 0;
// }

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
        string p,s;cin>>p>>s;
        if(p==s)
        {
            yes; continue;
        }

        int i=0,j=0;
        bool flg=true;
        while(i<p.length() && j<s.length())
        {
            char x = p[i];
            char y = s[j];
            if(x!=y)
            {
                flg=false;
                break;
            }

            int ct1=0,ct2=0;
            while(i<p.length() && x==p[i])
            {
                ct1++;
                i++;
            }
            while(j<s.length() && y==s[j])
            {
                ct2++;
                j++;
            }

            if(ct1>ct2 || ct2>ct1*2)
            {
                flg=false;
                break;
            }

        }

        if(i==p.size() && j==s.size() && flg)yes;
        else no;

    }
    return 0;
}
