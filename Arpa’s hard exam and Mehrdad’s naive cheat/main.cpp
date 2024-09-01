#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int last = 1;
    if(n==0){
            cout<<1;

    }
    else{
        switch (n % 4) {
        case 0: last = 6; break;
        case 1: last = 8; break;
        case 2: last = 4; break;
        case 3: last = 2; break;

    }
     cout << last << endl;
    }


}
