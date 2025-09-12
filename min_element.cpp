#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={4,3,6,99,99,7,2};
    int min_it=min_element(v.begin(),v.end())-v.begin();
   cout<<min_it<<endl;
   // int min_index = distance(v.begin(),min_it);
    //int min_index=min_element(v.begin(),v.end())-v.begin();
   // cout<<min_index<<endl;
    return 0;
}