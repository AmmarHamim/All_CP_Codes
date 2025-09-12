#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++)//O(sqrtN)-->O(N) theke valo(10^14)
    {
        if(n%i==0)
        {
        cout<<i<<" ";
        if(i!=n/i)
        cout<<n/i<<endl;
        }
    }
    return 0;
}