#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> intervals(N);
    for (int i = 0; i < N; ++i) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    // Edge case: No substances
    if (N == 0) {
        cout << "0 0" << endl;
        return 0;
    }

    int bestT1 = 101, bestT2 = 101;

    // Try every combination of possible temperatures for T1 and T2
    for (int T1 = -100; T1 <= 100; ++T1) {
        for (int T2 = T1; T2 <= 100; ++T2) {
            bool validT1 = true;
            bool validT2 = true;

            for (const auto& interval : intervals) {
                if (interval.second < T1) {
                    validT1 = false; // can't store this substance in fridge 1
                }
                if (interval.first > T2) {
                    validT2 = false; // can't store this substance in fridge 2
                }
            }

            // If we can store some substances in fridge 1 and some in fridge 2
            if (validT1 && validT2) {
                // Check if there's a way to assign intervals
                bool assigned = false;

                for (const auto& interval : intervals) {
                    // Assign to fridge 1 if possible
                    if (interval.first <= T1 && interval.second >= T1) {
                        assigned = true;
                        break;
                    }
                }

                if (assigned) {
                    bestT1 = T1;
                    bestT2 = T2;
                    break;
                }
            }
        }
    }

    if (bestT1 == 101) {
        cout << "-1" << endl; // no valid temperatures found
    } else {
        cout << bestT1 << " " << bestT2 << endl; // print best found temperatures
    }

    return 0;
}
