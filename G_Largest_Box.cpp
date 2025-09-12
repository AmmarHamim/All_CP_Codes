#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
    double l,w;
    cin>>l>>w;

    double a = 12;
    double b= -4*(l+w);
    double c = l*w;
    double nissayok=sqrt(b*b-4*a*c);
    double x1=(-b+nissayok)/(2*a);
    double x2=(-b-nissayok)/(2*a);

    double criti_1=min(l,w)/2;
    vector<double>ans;
    if(x1<=criti_1)
    {
        double calc= l*w*x1-2*x1*x1*(w+l)+4*x1*x1*x1;
        ans.push_back(calc);
    }
    if(x2<=criti_1)
    {
        double calc= l*w*x2-2*x2*x2*(w+l)+4*x2*x2*x2;
        ans.push_back(calc);
    }

    double calc = l*w*criti_1-2*criti_1*criti_1*(w+l)+4*criti_1*criti_1*criti_1;
    sort(ans.begin(),ans.end());

    double result= ans.back();
    // cout<<x1<<" "<<x2<<endl;

     cout << fixed << setprecision(10);
     cout << "Case " << i << ": " << result << endl;
    // cout<<"Case "<<i<<": "<<result<<endl;
    // cout<<result<<endl;

    }

    return 0;
}