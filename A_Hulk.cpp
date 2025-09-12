#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str="";
    for(int i=1;i<=n;i++)
    {
        if(i>1)
        str+=" that ";
        if(i%2==1)
        {
            str+="I hate";
        }
        else
        str+="I love";
    }
    str+=" it";
    cout<<str;
    return 0;
}