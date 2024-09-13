#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int c = 1;
    if (s1 != s2) c++;
    if (s1 != s3 && s2 != s3) c++;
    if (s1 != s4 && s2 != s4 && s3 != s4) c++;

    int needed = 4 - c;
    cout << needed << endl;

    return 0;
}
