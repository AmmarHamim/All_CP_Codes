#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    int halfsum=sum/2;
    sort(v.rbegin(),v.rend());
    int count=0;
    for(auto u:v)
    {
        sum2+=u;
        count++;
        if(halfsum<sum2)
        {
            cout<<count<<endl;
            break;
        }
    }
    return 0;
}