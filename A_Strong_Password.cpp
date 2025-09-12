#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int calculated_time(string &str)
{
    int time=2;
    for(int i=1;i<str.length();i++)
    {
        if(str[i-1]==str[i])time+=1;
        else time+=2;
    }
    return time;
}
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int maxtime=0;
        string bestpass;
        for(int i=0;i<s.length();i++)
        {
            for(char ch='a';ch<='z';ch++)
            {
                string newstring = s.substr(0,i)+ch+s.substr(i,s.length());

                int newtime=calculated_time(newstring);
                if(newtime>maxtime)
                {
                    maxtime=newtime;
                    bestpass=newstring;
                }
            }
        }
        cout<<bestpass<<endl;
    }
    return 0;
}