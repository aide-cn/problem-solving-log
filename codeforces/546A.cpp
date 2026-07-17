#include <iostream>
using namespace std;

void run_case() {
    int A, B, C, d = 0;
    cin >> A >> B >> C;
    for (int i = 0; i < C; i++) {
        d = d + (A * (C - i));
    }
    if (d > B) {
        B = abs(B - d);
        cout << B;
        return;
    }
    cout << 0;
}

int main() {
    run_case();
    return 0;
}