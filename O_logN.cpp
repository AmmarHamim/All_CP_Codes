#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;
    // while(n>0)//O(logN)-->very good(10^18)
    // {
    //     int dgt=n%10;
    //     cout<<dgt<<endl;
    //     n/=10;
    // }
    for(int i=1;i<=n;i*=2)//O(logN)
    {
        cout<<i<<endl;
    }
    return 0;
}