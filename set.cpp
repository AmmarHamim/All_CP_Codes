#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, x, y;
    cin >> q;
    set<int> st;
    for (int i = 0; i < q; i++)
    {
        cin >> y >> x;
        if (y == 1)
            st.insert(x);
        else if (y == 2)
            st.erase(x);
        else if (y == 3)
        {
            if (st.find(x) != st.end())
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
    // cout<<st.size()<<endl;

    return 0;
}