#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> x_candidates;
        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                x_candidates.push_back(a[i] + b[i]);
            }
        }

        bool valid = true;
        if (!x_candidates.empty()) {
            int x = x_candidates[0];
            for (int cand : x_candidates) {
                if (cand != x) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                for (int i = 0; i < n; ++i) {
                    if (b[i] == -1) {
                        int req = x - a[i];
                        if (req < 0 || req > k) {
                            valid = false;
                            break;
                        }
                    }
                }
                cout << (valid ? 1 : 0) << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else {
            int min_a = *min_element(a.begin(), a.end());
            int max_a = *max_element(a.begin(), a.end());
            int min_val = min_a + k;
            if (max_a > min_val) {
                cout << 0 << '\n';
            } else {
                long long ans = min_val - max_a + 1;
                cout << (ans < 0 ? 0 : ans) << '\n';
            }
        }
    }

    return 0;
}