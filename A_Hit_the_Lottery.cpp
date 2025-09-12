#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ct=0;
    cin>>n;
    while(n)
    {
        if(n>=100)
        {
            ct++;
            n-=100;
        }
        else if(n>=20)
        {
            ct++;
            n-=20;
        }
        else if(n>=10)
        {
            ct++;
            n-=10;
        }
        else if(n>=5)
        {
            ct++;
            n-=5;
        }
        else
        {
            ct++;
            n-=1;
        }
}
    cout<<ct<<endl;
    return 0;
}