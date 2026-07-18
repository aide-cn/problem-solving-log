#include <iostream>
using namespace std;


void run_case() {
    int A, B = 0;
    cin >> A;

    int C[A];
    for (int i = 0; i < A; i++) {
        cin >> C[i];
        B = B + C[i];
    }
    cout << ((A % 2 == 0 && B % 4 == 0) ? "YES" : "NO") << "\n";
}

int main() {
    int A;
    cin >> A;
    while (A-- > 0)
        run_case();
    return 0;
}