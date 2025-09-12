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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }

        vector<ll>perm(n);
        for(int i=0;i<n;i++)
        {
            perm[i]=i+1;
        }
        bool ck=true;
        int i=0;
        while(i<n)
        {
            int sheo_sz=v[i];

            int start=i;int end=i;
            while(end<n && v[end]==sheo_sz)end++;

            if(start==end-1)
            {
                cout<<-1<<endl;
                ck=false;
                break;
            }

            rotate(perm.begin()+start, perm.begin()+start+1, perm.begin()+end);

            i=end;
        }
        if(ck){
        for(auto u:perm)
        {
            cout<<u<<" ";
        }
        cout<<endl;
        }

    }
    return 0;
}