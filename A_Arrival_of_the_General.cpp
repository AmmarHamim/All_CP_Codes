#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    vector<int>vec(n);
    int max=0,maxi=0;
    int min=INT_MAX,mini=0;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        if(vec[i]>max)
        {
            maxi=i;
            max=vec[i];
        }
        if(vec[i]<=min)
        {
            mini=i;
            min=vec[i];
        }
    }
    // cout<<maxi<<endl;
    // cout<<mini<<endl;
    if(maxi>mini)
    cout<<((maxi-1)+(n-mini)-1)<<endl;
    else
    cout<<(maxi-1)+(n-mini);
    return 0;
}