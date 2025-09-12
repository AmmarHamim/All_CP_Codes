#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        
        int x1=sx-d,x2=sx+d;
        int y1=sy-d,y2=sy+d;
        if((x1<=1&&x2>=n)||(y1<=1&&y2>=m)||(x1<=1&&y1<=1)||(x2>=n&&y2>=m))
        cout<<-1<<endl;
        else cout<<n-1+m-1<<endl;
    }
    return 0;
}