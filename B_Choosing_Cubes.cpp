#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ele=v[f-1];
        sort(v.rbegin(),v.rend());
        bool ck=false;
        int ele_index=0;
        for(int i=0;i<n;i++)
        {
            if(ele==v[i])
            {
                ele_index=i+1;
                break;
            }
        }
        for(int i=k;i<n;i++)
        {
            if(ele==v[i])
            {
                ck=true;
                break;
            }
        }
       // cout<<ele_index<<endl;
        if (ele_index<=k&&ck)
        cout<<"MAYBE"<<endl;
        else if(ele_index<=k&&ck==false)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
}
}