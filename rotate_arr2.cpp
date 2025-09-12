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
        v[i]=i+1;
    }

    // aume v= 1 2 3 4 5; we want to rotate it cycically by 2 without rotate func
    // we can make two block of v--> [1 2]&[3 4 5] as rotation = 2;
    // now reverse both of the block and join it together and reverse the whole array finnaly;
    reverse(v.begin(), v.begin()+2); // reversing the first block;
    reverse(v.begin()+2, v.begin()+n); //reversing the second block
    reverse(v.begin(), v.end()); // reversing the whole array and we got the rotated array

    for(auto u:v)
    {
        cout<<u<<" ";
    }
    return 0;
}