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
        double x;cin>>x;

        // double ans = 3.42*x;
        // printf("%.1lf\n",ans);

        double ans = x/(1-1/sqrt(2));
        printf("%.1lf\n",ans);
    }
    return 0;
}