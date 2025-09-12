#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int waitTime=0;
    int totalTime=0;
    for(int i=0;i<n-1;i++)
    {
        waitTime=v[i]+waitTime;
        totalTime+=waitTime;
    }

    cout<< totalTime/n<<endl;

    return 0;
}