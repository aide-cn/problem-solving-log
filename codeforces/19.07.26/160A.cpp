#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void run_case() {
    int A;
    cin >> A;
    vector<int> B(A);
    for (int i = 0; i < A; i++) {
        int C;
        cin >> C;
        B[i] = C;
    }
    sort(B.rbegin(), B.rend());
    int D = 0;
    for (int i : B) {
        D += i;
    }
    D = D / 2;
    int taken_coin = 0, E = 0;
    for (int i : B) {
        E += i;
        taken_coin++;
        if (E > D) {
            cout << taken_coin;
            return;
        }
    }
}

int main() {
    run_case();
    return 0;
}