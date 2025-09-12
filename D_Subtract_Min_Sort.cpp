#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << "YES\n";
            continue;
        }
        vector<int> processed = a;
        for (int i = n - 2; i >= 0; --i) {
            processed[i] = min(processed[i], processed[i+1]);
        }
        bool valid = true;
        for (int i = 0; i < n - 1; ++i) {
            if (processed[i] > processed[i+1]) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << "\n";
    }
    return 0;
}