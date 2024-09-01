#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int start = 0;
    int en = N - 1;
    int x;
    while (start < en) {
        if (arr[start] != arr[en]) {
            x=-1;
        }
        start++;
        en--;
    }
    if (x==-1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}
