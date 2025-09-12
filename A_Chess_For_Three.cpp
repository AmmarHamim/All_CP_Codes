#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        int total=p1+p2+p3;
        if(total%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        int game=total/2;
        cout<<min(p1+p2,game)<<endl;
    }
    return 0;
}