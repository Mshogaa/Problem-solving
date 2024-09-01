#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int N;
   cin >> N;
   vector<vector<float>> rectangles(N, vector<float>(8));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> rectangles[i][j];
        }
    }

    for (int i = N - 1; i >= 0; --i) {
        for (int j = 0; j < 8; ++j) {
            if (j > 0) cout << " ";
            cout << rectangles[i][j];
        }
        cout << endl;
    }

    return 0;
}
