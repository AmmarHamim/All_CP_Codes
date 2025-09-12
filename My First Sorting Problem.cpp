#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y,t;
   cin>>t;
   while(t--)
   {
      cin>>x>>y;
      if(x<=y)
        cout<<x<<' '<<y<<endl;
        else
        cout<<y<<' '<<x<<endl;
   }

    return 0;
}

