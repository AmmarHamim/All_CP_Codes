#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        long long max_score=0;
        long long x=r;
        while(x>1)
        {
            max_score++;
            x=x/2;
        }
        cout<<max_score<<endl;
    }
    return 0;
}