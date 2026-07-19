#include <iostream>
using namespace std;

void run_case() {
    int A;
    cin >> A;
    double B;

    for (int i = 0; i < A; i++) {
        double C;
        cin >> C;
        B += C;
    }
    cout << B / A;
}

int main() {
    run_case();
    return 0;
}