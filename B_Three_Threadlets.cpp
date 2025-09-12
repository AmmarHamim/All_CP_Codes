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
        ll a,b,c;
        cin>>a>>b>>c;
        bool found=false;
        for(int i=0;i<=3;i++)
        {
            for(int j=0;j<=3;j++)
            {
                for(int k=0;k<=3;k++)
                {
                    if(i+j+k>3)continue;
                    if(a%(i+1)==0&&b%(j+1)==0&&c%(k+1)==0)
                    {
                        if(a/(i+1)==b/(j+1)&& b/(j+1)==c/(k+1))
                        {
                            found=true;
                            break;
                        }
                    }
                }
                if(found)break;
            }
            if(found)break;
        }

        if(found)yes;
        else no;
    }
    return 0;
}