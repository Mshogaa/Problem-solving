#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    ll count = 0;
    vector<char> v;

    for (char c : s) {
        if (!v.empty() && c == v.back()) {
            v.pop_back();
            count++;
        } else {
            v.push_back(c);
        }
    }

    if (count % 2 == 0) {
    cout << "No"<<endl;
} else {
    cout << "Yes"<<endl;
}

    return 0;
}
