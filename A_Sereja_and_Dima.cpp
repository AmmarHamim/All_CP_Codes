#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int s=0,d=0,turn=1;
    while(!v.empty())
    {
    if(turn==1)
    {
        if(*v.begin()<v.back())
        {
            s+=v.back();
            v.pop_back();
            turn=2;
        }
        else
        {
            s+=*v.begin();
            v.erase(v.begin());
            turn=2;
        }
    }
    else if(turn==2)
    {
        if(*v.begin()<v.back())
        {
            d+=v.back();
            v.pop_back();
            turn=1;
        }
        else
        {
            d+=*v.begin();
            v.erase(v.begin());
            turn=1;
        }
    }
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}