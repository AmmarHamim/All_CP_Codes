#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        std::vector<int> b(n + 1);

        for (int j = 0; j < n; ++j) {
            std::cin >> a[j];
        }

        for (int j = 0; j < n + 1; ++j) {
            std::cin >> b[j];
        }

        int operations = 0;
        int diffSum = 0;

        // Calculate the sum of absolute differences between corresponding elements of a and b
        for (int j = 0; j < n; ++j) {
            int diff = b[j] - a[j];
            diffSum += std::abs(diff);
        }

        // Calculate the number of additional operations needed due to length difference
        diffSum += std::abs(b[n] - a[n-1]);

        std::cout << diffSum << std::endl;
    }

    return 0;
}
