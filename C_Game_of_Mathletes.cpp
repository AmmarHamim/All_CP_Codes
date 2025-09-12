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
        vector<int> x(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
            ++freq[x[i]];
        }
        int ans = 0;
        unordered_set<int> processed;

        for (const auto& entry : freq) {
            int num = entry.first;
            if (processed.count(num)) continue;

            int complement = k - num;
            if (complement == num) {
                ans += entry.second / 2;
                processed.insert(num);
            } else {
                if (freq.count(complement) && !processed.count(complement)) {
                    ans += min(entry.second, freq[complement]);
                    processed.insert(num);
                    processed.insert(complement);
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}