#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int prices[n];
        for (int j = 0; j < n; j++) {
            cin >> prices[j];
        }

        int m = 1e6;
        int c = 0;

        for (int j = n-1; j >= 0; j--) {
            if (prices[j] > m) {
                c++;
            } else {
                m = prices[j];
            }
        }

        cout << c << endl;
    }

    return 0;
}
