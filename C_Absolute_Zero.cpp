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
        for(auto& u:v)
        {
            cin>>u;
        }

        vector<ll>op;
        bool imp=false;

        while(*max_element(v.begin(),v.end())>0)
        {
            if(op.size()>40)
            {
                cout<<-1<<endl;
                imp=true;
                break;
            }

           vector<ll>nonzero;

           for(auto u:v)
           {
            if(u>0)
            {
                nonzero.push_back(u);
            }
           }

           if (nonzero.size()>1 && (nonzero[0]%2)!=(nonzero[1]%2))
           {
                cout << -1 << endl;
                imp=true;
                break;
            }

            ll maxele= *max_element(v.begin(),v.end());
            ll minele= *min_element(v.begin(),v.end());

            ll x=(maxele+minele)/2;

            op.push_back(x);

            for(auto& u:v)
            {
                u=abs(u-x);
            }

        }

        if(!imp)
        {
            cout<<op.size()<<endl;
            for(int i=0;i<op.size();i++)
            {
                cout<<op[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}