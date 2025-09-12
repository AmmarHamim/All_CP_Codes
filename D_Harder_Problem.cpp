#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int tcc;
    cin>>tcc;
    while(tcc--)
    {
        ll nn;
        cin >> nn;
        vector<ll>vec(nn + 1),a(nn + 1),abss;
        map<int,int>mpz,mp;
        for (int i=1;i<=nn;i++)
        {
            cin>>vec[i];
            mpz[vec[i]]++;
        }

        for (int i=1;i<=nn;i++)
        {
            if (mpz[i]>0)
                continue;
            else
                abss.push_back(i);
        }
        for (int i=1;i<=nn;i++)
        {
            if (mp[vec[i]]>0)
            {
                cout<<abss[abss.size()-1]<<" ";
                abss.pop_back();
            }
            else
            {
                cout<<vec[i]<< " ";
                mp[vec[i]]++;
            }
    }
        cout<<endl;
    }
    return 0;
}