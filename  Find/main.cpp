#include <iostream>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int index = -1;
    for (int i = 0; i < N; ++i) {
        if (A[i] == x) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << index << endl;
    } else {
        cout << "Not Found" << endl;
    }
}
