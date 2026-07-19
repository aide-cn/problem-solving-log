#include <iostream>
#include <string>
using namespace std;

void run_case() {
    int A, C = 1;
    cin >> A;
    string B, D;
    cin >> B;
    for (int i = 1; i < A; i++) {
        cin >> D;
        if (B != D) {
            C++;
        }
        B = D;
    }
    cout << C;
}

int main() {
    run_case();
    return 0;
}