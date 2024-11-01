#include <iostream>
using namespace std;

const long long MAX_DIST = 200000;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    // Using static arrays for performance and to avoid dynamic memory overhead
    long long countt[MAX_DIST + 2] = {0};       // Array to store range updates
    long long coverage[MAX_DIST + 1] = {0};    // Array to store number of sensors covering each distance
    long long admissible[MAX_DIST + 1] = {0};  // Array to store whether each distance is admissible
    long long prefix_admissible[MAX_DIST + 1] = {0}; // Prefix sum array for admissible distances

    // Reading sensors and updating ranges in the count array
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        countt[l] += 1;
        if (r + 1 <= MAX_DIST) {
            countt[r + 1] -= 1;
        }
    }

    // Calculate the coverage array using prefix sum
    for (int i = 1; i <= MAX_DIST; ++i) {
        coverage[i] = coverage[i - 1] + countt[i];
    }

    // Determine admissible distances
    for (int i = 1; i <= MAX_DIST; ++i) {
        admissible[i] = (coverage[i] >= k) ? 1 : 0;
    }

    // Build the prefix sum for admissible distances
    for (int i = 1; i <= MAX_DIST; ++i) {
        prefix_admissible[i] = prefix_admissible[i - 1] + admissible[i];
    }

    // Answer each query
    while (q--) {
        int a, b;
        cin >> a >> b;
        int result = prefix_admissible[b] - prefix_admissible[a - 1];
        cout << result << endl;
    }

}



