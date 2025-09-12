#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,max=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;

        sum=sum-a+b;
        if(sum>max)
        {
            max=sum;
        }

    }
    cout<<max;
    return 0;
}

