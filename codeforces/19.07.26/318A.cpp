#include <iostream>
#include <vector>

using namespace std;

void run_case() {
    long long A, B;
    cin >> A >> B;
    long long C = (A + 1) / 2;
    if (B <= C) {
        cout << 2 * B - 1;
    } else {
        cout << 2 * (B - C);
    }
}

int main () {
    run_case();
    return 0;
}