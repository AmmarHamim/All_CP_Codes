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
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;


        int a,b;
        if(l1==l2)
        {
            a=l1;
            b=r2;
        }
        else
        {
            a=l1;
            b=l2;
        }

        cout<<a<<" "<<b<<endl;
    }
    return 0;
}