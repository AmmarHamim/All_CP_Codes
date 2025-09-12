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
        int n;cin>>n;
        // string s;cin>>s;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int ct0=0,ct1=0,ct2=0,ct3=0,ct5=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)ct0++;
            else if(v[i]==1)ct1++;
            else if(v[i]==2)ct2++;
            else if(v[i]==3)ct3++;
            else if(v[i]==5)ct5++;

            if(ct0>=3&&ct1>=1&&ct2>=2&&ct3>=1&&ct5>=1)
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
        

    }
    return 0;
}