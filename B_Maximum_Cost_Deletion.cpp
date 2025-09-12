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
        int n,a,b;
        cin>>n>>a>>b;
        string s;cin>>s;
        int score=0;
        if(b>=0)
        {
            score= (a+b)*n;
        }
        else if(b<0)
        {
            int zeroseg=0;
            int oneseg=0;

            for(int i=0;i<n-1;i++)
            {
                if(s[i]=='0'&&s[i+1]=='1')zeroseg++;
                else if(s[i]=='1'&&s[i+1]=='0')oneseg++;
            }

            if(s[n-1]=='0')zeroseg++;
            else oneseg++;
            // cout<<zeroseg<<" "<<oneseg<<endl;

            if(zeroseg<oneseg)
            {
                int ct=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='0')ct++;
                    if(ct>0&&s[i]=='1')
                    {
                        score+= a*ct+b;
                        ct=0;
                    }
                }
                // if(ct>0)score+= a*ct+b;
                int l=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='1')l++;
                }
                score+= a*l+b;
            }
            else
            {
                int ct=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='1')ct++;
                    if(ct>0&&s[i]=='0')
                    {
                        score+= a*ct+b;
                        ct=0;
                    }
                }
                //if the seg is equal then the last segment will not be counted as there will be no switch
                // thats why this
                if(ct>0)
                score+= ct*a+b;
                int l=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='0')l++;
                }
                score+= a*l+b;
            }
        }
         cout<<score<<endl;
    }
    return 0;
}