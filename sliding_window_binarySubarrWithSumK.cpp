#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int atmost(vector<int>&v,int k)
{
    if(k<0)return 0;

    int r=0,l=0,ct=0;
    int sum=0;
    while(r<v.size())
    {
        sum+=v[r];
        while(sum>k)
        {
            sum-=v[l];
            l++;
        }

        ct+= r-l+1;
        r++;
    }
    return ct;
}
int main()
{
    fast_io;

    int n,goal;
    cin>>n>>goal;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int ans = atmost(v,goal) - atmost(v,goal-1);
    cout<<ans<<endl;

    return 0;
}