#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={4,3,6,99,99,7};
    auto max_it=max_element(v.begin(),v.end());
   cout<<*max_it<<endl;
    int max_index = distance(v.begin(),max_it);
    //int max_index=max_element(v.begin(),v.end())-v.begin();
    cout<<max_index<<endl;
    return 0;
}