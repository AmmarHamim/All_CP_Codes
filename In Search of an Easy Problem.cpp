#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        int h;
        cin>>h;
        v.push_back(h);
    }

    for(auto it=v.begin(); it!=v.end(); it++)
    {
        if(*it==1)
            count1++;
    }
    if(count1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;


    return 0;
}
