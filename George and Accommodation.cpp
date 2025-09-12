#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,count=0;
    cin>>n;
    for(auto i=0;i<n;i++)
    {
        cin>>a>>b;
        auto cap=b-a;
        if(cap>=2)
            count++;
    }
    cout<<count;

    return 0;
}
