#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v(3);
        vector<int>vabc(3);
        cin>>v[0]>>v[1]>>v[2];
        int op=5;
        for(int i=0;i<op;i++)
        {
            sort(v.begin(),v.end());
            v[0]++;
        }
        int max_p=v[0]*v[1]*v[2];
        cout<<max_p<<endl;
    }
    
    return 0;
}