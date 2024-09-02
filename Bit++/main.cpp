#include <iostream>
#include <string>
using namespace std;
int x =0;
void func(string cc)
{
    if (cc[0] == '+' || cc[2] == '+') {
            x++;
        } else {
            x--;
        }
}
int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin>>s;
       func(s);
    }
    cout << x << endl;
    return 0;
}
