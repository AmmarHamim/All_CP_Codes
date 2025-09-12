#include<bits/stdc++.h>
using namespace std;
int main()
{
    //unique func removes the consecutive duplicates
    vector<int>v={1,6,4,3,3,2,1,9};
    sort(v.begin(),v.end());
   auto it=unique(v.begin(),v.end());
   v.resize(distance(v.begin(),it));
   cout<<v.size()<<endl;
    for(auto u:v)
    {
        cout<<u<<" ";
    }

    return 0;
}