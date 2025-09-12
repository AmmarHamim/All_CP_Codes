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

        unordered_map<string,int>freq;

        string s[3][n];

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>s[i][j];
                string str=s[i][j];

                freq[str]++;
            }
        }

        vector<int>score(3,0);

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                string word=s[i][j];

                if(freq[word]==1)score[i]+=3;
                else if(freq[word]==2)score[i]+=1;
                else if(freq[word]==3)score[i]+=0;
            }
        }

        for(auto u:score)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }
    return 0;
}