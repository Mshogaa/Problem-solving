#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        int r = a % b;

        if (r == 0) {
            cout << 0 << endl;
        } else {
            int moves = b - r;
            cout << moves << endl;
        }
    }

    return 0;
}
