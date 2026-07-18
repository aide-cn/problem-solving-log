#include <iostream>
using namespace std;

void run_case(int a) {
    int A[a][3], B[a] = {};
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < a; j++) {
            B[i] += A[j][i];
        }
    }
    for (int i = 0; i < a; i++) {
        if (B[i] != 0) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    int a;
    cin >> a;
    run_case(a);
    return 0;
}