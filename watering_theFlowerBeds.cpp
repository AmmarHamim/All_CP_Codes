#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int N, D;
        cin >> N >> D;

        vector<ll> x(N),y(N);
        for (int i = 0; i < N; ++i)
        {
            cin>>x[i]>>y[i];
        }

        ll ans=0;
        for(int i=0;i<N;i++)
        {
            ans+= D/x[i];
        }

        cout << "Case " << t << ": " << ans << endl;
    }

    return 0;
}