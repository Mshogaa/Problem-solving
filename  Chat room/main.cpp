#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    char hello[] = {'h', 'e', 'l', 'l', 'o'};
    int i = 0;
    for (char letter : s) {
        if (letter == hello[i]) {
            i++;
            if (i == 5) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
