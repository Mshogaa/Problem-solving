#include <iostream>

using namespace std;

const int MAXN = 105;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char b[MAXN];
        cin >> b;

        char a[MAXN];
        a[0] = b[0];
        a[1] = b[1];
        a[2] = '\0';
        int j = 2;

        for (int i = 2; i < MAXN && b[i] != '\0'; i += 2) {
            bool found = false;

            for (int k = 0; k <= j - 2; k += 2) {
                if (a[k] == b[i] && a[k+1] == b[i+1]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                a[j++] = b[i];
                a[j++] = b[i+1];
                a[j] = '\0';
            }
        }

        cout << a << endl;
    }

    return 0;
}
