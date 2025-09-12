#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int left = 0;
        while (left < n / 2 && s[left] == s[n - 1 - left]) {
            left++;
        }
        if (left == n / 2) {
            cout << "0\n";
            continue;
        }
        int right = n / 2 - 1;
        while (right >= 0 && s[right] == s[n - 1 - right]) {
            right--;
        }
        int end_left = n - 1 - right;
        cout << end_left - left + 1 << "\n";
    }
    
    return 0;
}