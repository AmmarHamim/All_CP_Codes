#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() 
{
    fast_io;
    
    int t;
    cin >> t; 
    while (t--) 
    {
        int n, m;
        cin>>n>>m;
       int min_row=n,max_row=0,min_col=m,max_col=0;
        
        for (int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for (int j=0;j<m;j++)
            {
                if (s[j]=='#')
                {
                     min_row = min(i+1,min_row);
                     max_row = max(i+1,max_row);
                     min_col = min(j+1,min_col);
                     max_col = max(j+1,max_col);
                }
            }
        }
        
        int center_x=(min_row+max_row)/2;
        int center_y=(min_col+max_col)/2;
        
        cout<<center_x<<" "<<center_y<<endl;
    }
    
    return 0;
}
