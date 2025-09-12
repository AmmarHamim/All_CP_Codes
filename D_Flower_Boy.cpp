#include <bits/stdc++.h>
using namespace std;

bool is_possible(const vector<int>& a, const vector<int>& b, int k, int pos) {
    vector<int> new_a = a;
    new_a.insert(new_a.begin() + pos, k);
    int m = b.size();
    int collected = 0;
    for (int i = 0; i < new_a.size() && collected < m; ++i) {
        if (new_a[i] >= b[collected]) {
            collected++;
        }
    }
    return collected == m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        // Check if it's possible without adding any new flower
        int collected = 0;
        for (int i = 0; i < n && collected < m; ++i) {
            if (a[i] >= b[collected]) {
                collected++;
            }
        }
        if (collected == m) {
            cout << 0 << '\n';
            continue;
        }

        // Binary search on the possible k values
        int left = 1;
        int right = *max_element(b.begin(), b.end());
        int answer = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            bool possible = false;
            for (int pos = 0; pos <= n; ++pos) {
                if (is_possible(a, b, mid, pos)) {
                    possible = true;
                    break;
                }
            }
            if (possible) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << answer << '\n';
    }

    return 0;
}