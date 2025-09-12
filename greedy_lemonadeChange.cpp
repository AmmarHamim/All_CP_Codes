#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int five=0,ten=0;
    bool ck=true;
    for(int i=0;i<n;i++)
    {
        if(v[i]==5)five++;
        else if(v[i]==10)
        {
            if(five)
            {
                ten++;
                five--;
            }
            else 
            {
                ck=false;
                break;
            }
        }
        else
        {
            if(ten&&five)
            {
                ten--;
                five--;
            }
            else if(five>=3)five-=3;
            else 
            {
                ck=false;
                break;
            }
        }
        
    }

    if(ck)cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}