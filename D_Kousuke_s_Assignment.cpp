#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tc;
    cin>>tc;
    while(tc--)
    {
        int nn;
        cin>>nn;
        vector<int>v(nn);

        for (int i=0;i<nn;i++)
        {
            cin>>v[i];
        }

        map<ll,int>mpp;
        ll presum=0;
        int ct=0;
        mpp[0]=1;

        for(int i=0;i<nn;i++)
        {
            presum+=v[i];

            if (mpp[presum])
            {
                ct++;
                mpp.clear();
                mpp[0]=1;
                presum=0;
            }
            mpp[presum]++;
        }

        cout<<ct<<endl;
    }
    return 0;
}
