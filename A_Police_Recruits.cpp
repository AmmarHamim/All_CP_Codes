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
    
    int crime=0;
    int police=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)police+=v[i];
        else if(police==0&&v[i]<0)
        {
            crime++;
        }
        if(police>0&&v[i]<0)
        {
            police--;
        }
    }
    cout<<crime<<endl;
    return 0;
}