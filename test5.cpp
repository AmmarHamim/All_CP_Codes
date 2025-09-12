#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int L, N, M;
    cin >> L >> N >> M;
    
    set<int> horizontalBeams; // Set to store unique horizontal beams
    set<int> verticalBeams;   // Set to store unique vertical beams

    // Read beams from laser A
    for (int i = 0; i < N; i++) {
        char direction;
        int coordinate;
        cin >> direction >> coordinate;
        if (direction == 'U') {
            horizontalBeams.insert(coordinate); // Upper side
        } else if (direction == 'R') {
            verticalBeams.insert(coordinate);   // Right side
        }
    }

    // Read beams from laser B
    for (int i = 0; i < M; i++) {
        char direction;
        int coordinate;
        cin >> direction >> coordinate;
        if (direction == 'U') {
            horizontalBeams.insert(coordinate); // Upper side
        } else if (direction == 'L') {
            verticalBeams.insert(coordinate);   // Left side
        }
    }

    // Count unique beams
    int horizontalCount = horizontalBeams.size(); // Number of unique horizontal beams
    int verticalCount = verticalBeams.size();     // Number of unique vertical beams

    // Calculate number of resulting areas
    int numberOfAreas = (horizontalCount + 1) * (verticalCount + 1);

    // Output the result
    cout << numberOfAreas << endl;

    return 0;
}
