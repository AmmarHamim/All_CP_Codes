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
    int tarVal;cin>>tarVal;

    int left=0;int right=n-1;

    // bool found=false;
    while(left<right)
    {
        if(v[left]+v[right]==tarVal)
        {
            // found=true;
            yes;
            cout<<v[left]<<" "<<v[right]<<endl;
            return 0;
        }
        if(v[left]+v[right]<tarVal)left++;
        else right--;
    }
    no;
    return 0;
}