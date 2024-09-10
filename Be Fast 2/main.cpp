#include <iostream>
using namespace std;

int main() {
    long long L, R, N;
    cin >> L >> R >> N;
    long long divisible_up_to_R = R / N;
    long long divisible_up_to_L_minus_1 = (L - 1) / N;

    long long divisible_count = divisible_up_to_R - divisible_up_to_L_minus_1;

    long long total_count = R - L + 1;

    long long not_divisible_count = total_count - divisible_count;

    cout << not_divisible_count << endl;

    return 0;
}
