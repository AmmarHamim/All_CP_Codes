#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    int total=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=="Tetrahedron")
        total+=4;
        if(s[i]=="Cube")
        total+=6;
        if(s[i]=="Octahedron")
        total+=8;
        if(s[i]=="Dodecahedron")
        total+=12;
        if(s[i]=="Icosahedron")
        total+=20;
    }
    cout<<total<<endl;
    return 0;
}