#include <iostream>
using namespace std;
#include <algorithm>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        int layer1 = min({x1 - 1, n - x1, y1 - 1, n - y1});
        int layer2 = min({x2 - 1, n - x2, y2 - 1, n - y2});

        cout << abs(layer1 - layer2) << endl;
    }
    return 0;
}
