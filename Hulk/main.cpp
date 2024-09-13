#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string feelings = "";

    for (int i = 1; i <= n; ++i) {
        if (i > 1) {
            feelings += " that ";
        }
        if (i % 2 == 1) {
            feelings += "I hate";
        } else {
            feelings += "I love";
        }
    }

    feelings += " it";


    cout << feelings << endl;

    return 0;
}
