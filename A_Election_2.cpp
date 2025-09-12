#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n,a,b;
    cin>>n>>a>>b;
    int diff=n-(a+b);

    if(a>=b && b+diff<a)yes;
    else if(b>a&& a+diff<b)yes;
    else no;
    return 0;
}